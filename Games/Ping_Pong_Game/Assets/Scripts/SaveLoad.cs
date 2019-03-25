using UnityEngine;
using System.Collections;

public class SaveLoad : MonoBehaviour
{
    public Top veri;

    public void SaveGame(Top veri)
    {
        PlayerPrefs.SetInt("Sag_Raket_Skor", veri.sagRaket.skor);
        PlayerPrefs.SetInt("Sol_Raket_Skor", veri.solRaket.skor);
        PlayerPrefs.Save();
    }

    public Top LoadGame()
    {
        veri.sagRaket.skor = PlayerPrefs.GetInt("Sag_Raket_Skor");
        veri.solRaket.skor = PlayerPrefs.GetInt("Sol_Raket_Skor");

        return veri;
    }

    public void OyunKaydet()
    {
        SaveGame(veri);
        Debug.Log("Oyun Kaydedildi");
    }

    public void OyunYukle()
    {
        veri = LoadGame();
        veri.solRaket.raketSkor.text = veri.solRaket.skor.ToString();
        veri.sagRaket.raketSkor.text = veri.sagRaket.skor.ToString();
        Debug.Log("Oyun Yüklendi");
    }

    public void ResetGame()
    {
        veri.sagRaket.skor = 0;
        veri.solRaket.skor = 0;
        veri.sagRaket.raketSkor.text = veri.sagRaket.skor.ToString();
        veri.solRaket.raketSkor.text = veri.solRaket.skor.ToString();
        Debug.Log("Oyun Sıfırlandı");
    }
}

package javaileprogramlama;

public class Ogrenci_Kalitim_3 extends Personel_Kalitim_3 {
	private int ogrenciNo = 0;

	public Ogrenci_Kalitim_3() {
		super();
		ogrenciNo = 0;
	}

	public Ogrenci_Kalitim_3(String isim, String soyIsim, int yasi, int ogrenciNo) {
		super(isim, soyIsim, yasi);
		this.ogrenciNo = ogrenciNo;
		setOgrenciNo(ogrenciNo);
	}

	public int getOgrenciNo() {
		return ogrenciNo;
	}

	public void setOgrenciNo(int ogrenciNo) {
		if (ogrenciNo > 0)
			this.ogrenciNo = ogrenciNo;
		else
			this.ogrenciNo = 0;
	}

	public String getKimlikBilgileri() {
		return super.getKimlikBilgileri() + "Ogrenci No : " + ogrenciNo + "\n";
	}

}

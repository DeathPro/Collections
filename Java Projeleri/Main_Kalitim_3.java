package javaileprogramlama;

public class Main_Kalitim_3 {
	public static void main(String[] args) {
		Personel_Kalitim_3 personel = new Personel_Kalitim_3("Senior", "Developer", 33);

		System.out.println(personel.getKimlikBilgileri());
		System.out.println(personel.toString());
		System.out.println();

		Ogrenci_Kalitim_3 ogrenci3 = new Ogrenci_Kalitim_3("Junior", "Javaci", 20, 1234567);

		System.out.println(ogrenci3.getKimlikBilgileri());
		System.out.println(ogrenci3.toString());
		System.out.println();
	}
}

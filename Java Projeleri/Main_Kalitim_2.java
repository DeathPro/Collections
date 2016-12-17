package javaileprogramlama;

public class Main_Kalitim_2 {
	public static void main(String[] args) {
		Personel_Kalitim_2 personel = new Personel_Kalitim_2("Senior", "Developer", 33);
		System.out.println(personel.getKimlikBilgileri());

		System.out.println(personel.toString());
		System.out.println();

		Ogrenci_Kalitim_2 ogrenci2 = new Ogrenci_Kalitim_2("Junior", "Javaci", 20, 1234567);

		System.out.println(ogrenci2.getKimlikBilgileri());

		System.out.println(ogrenci2.toString());
		System.out.println();

	}
}

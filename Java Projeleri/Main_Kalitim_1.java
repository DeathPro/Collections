package javaileprogramlama;

public class Main_Kalitim_1 {

	public static void main(String[] args) {
		Personel_Kalitim_1 personel = new Personel_Kalitim_1("Senior", "Developer", 33);
		System.out.println(personel.getKimlikBilgileri());

		System.out.println(personel.toString());
		System.out.println();

		Ogrenci_Kalitim_1 ogrenci = new Ogrenci_Kalitim_1("Junior", "Javaci", 20, 1234567);
		System.out.println(ogrenci.getKimlikBilgileri());

		System.out.println(ogrenci.toString());
		System.out.println();
	}

}

package javaileprogramlama;

//Interface'lerden nesne olusturulamaz.

public class Main_Interface_1 {

	public static void main(String[] args) {
		Kare_Interface kare = new Kare_Interface(4);
		Kare_Interface kare1 = new Kare_Interface(5);

		Personel_Interface personel = new Personel_Interface(35);
		Personel_Interface personel1 = new Personel_Interface(35);

		System.out.println(kare.karsilastir(kare1));
		System.out.println(personel.karsilastir(personel1));
		//kare ve personel asil nesnemiz olup
		//parametre olarak kare1 ve personel1 nesnelerini verdik.
	}

}

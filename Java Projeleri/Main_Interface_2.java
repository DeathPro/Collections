package javaileprogramlama;

public class Main_Interface_2 {

	public static void main(String[] args) {
		Kare_Interface kare = new Kare_Interface(4);
		Kare_Interface kare1 = new Kare_Interface(5);
		Personel_Interface personel = new Personel_Interface(35);
		Personel_Interface personel1 = new Personel_Interface(35);

		nesneKarsilastir(kare, kare1);
		nesneKarsilastir(personel, personel1);

	}

	// Bizden Karsilastirma_Interface arayüzü türünden karsilastirma ve
	// karsilastirma1
	// tipinde nesneler bekleyen metodu oluşturalim.
	public static void nesneKarsilastir(Karsilastirma_Interface karsilastirma, Karsilastirma_Interface karsilastirma1) {
		System.out.println("Karsilastirma : " + karsilastirma.karsilastir(karsilastirma1));
	}

}

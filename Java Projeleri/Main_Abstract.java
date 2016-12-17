package javaileprogramlama;

public class Main_Abstract {

	public static void main(String[] args) {

		// Sekiller_Absract sekil=new Sekiller_Absract();
		// abstract sinifta nesne uretemessin...
		Dikdortgen_Abstract dikdortgen = new Dikdortgen_Abstract(4,9);
		Kare_Abstract kare = new Kare_Abstract(4);

		// SekillerinAlanlari(sekil);
		SekillerinAlanlari(kare);
		SekillerinAlanlari(dikdortgen);
	}

	public static void SekillerinAlanlari(Sekiller_Absract sekil1) {

		System.out.println("Sekillerin Alanlari : " + sekil1.alanHesaplama());
	}

}

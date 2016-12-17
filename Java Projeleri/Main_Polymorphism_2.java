package javaileprogramlama;

//Bu Kod guzel değil uzun vede gereksiz yani....

public class Main_Polymorphism_2 {
	public static void main(String[] args) {
		Sekiller_Polymorphism sekil = new Sekiller_Polymorphism();
		Kare_Polymorphism kare = new Kare_Polymorphism(4);
		Dikdortgen_Polymorphism dikdortgen = new Dikdortgen_Polymorphism(4, 9);

		SekillerinAlanlari(sekil);
		SekillerinAlanlari(kare);
		SekillerinAlanlari(dikdortgen);
	}

	public static void SekillerinAlanlari(Object Alan) {
		// sekiller==Alan mi yani her iskisinin tipi ayni mi kontrol edek.
		if (Alan instanceof Sekiller_Polymorphism) {
			// kontrol sonucu true ise Alan isimli nesne bir sekiller
			// nesnesine atayarak, metodu cagir.
			Sekiller_Polymorphism sekil = (Sekiller_Polymorphism) Alan;
			System.out.println("Sekillerin Alanlari : " + sekil.alanHesaplama());
		} else if (Alan instanceof Kare_Polymorphism) {
			Kare_Polymorphism kare = (Kare_Polymorphism) Alan;
			System.out.println("Sekillerin Alanlari : " + kare.alanHesaplama());
		} else if (Alan instanceof Dikdortgen_Polymorphism) {
			Dikdortgen_Polymorphism dikdortgen = (Dikdortgen_Polymorphism) Alan;
			System.out.println("Sekillerin Alanlari : " + dikdortgen.alanHesaplama());
		}
	}
}

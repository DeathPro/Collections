package javaileprogramlama;

public class DikReferanceMain {

	public static void main(String[] args) {
		DikReferance dd1 = new DikReferance(5, 5);
		yeniDikdortgen(dd1);
		System.out.println("dd1 Dikdortgeninin Ilk Alani = " + dd1.DikAlan());
		System.out.println();
		System.out.println("Metot Tarafindan Dikdortgene Verilen Yeni Degerlere Gore");
		System.out.println("dd1 Dikdortgeninin Yeni Alani = " + dd1.DikAlan());
		System.out.println();
		System.out.println("dd1 Dikdortgeninin Yeni Eni = " + dd1.getEn());
		System.out.println("dd1 Dikdortgeninin Yeni Boyu = " + dd1.getBoy());
		
	}

	public static void yeniDikdortgen(DikReferance dd1) {
		dd1.setEn(15);
		dd1.setBoy(15);
	}
}

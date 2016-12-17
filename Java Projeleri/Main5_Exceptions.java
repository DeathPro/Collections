package javaileprogramlama;

public class Main5_Exceptions {
	public static void main(String[] args) {
		int[] dizi = new int[3];

		dizi[0] = 1;
		dizi[1] = 2;
		dizi[2] = 3;
		try {
			istisna1(dizi);
		} catch (ArrayIndexOutOfBoundsException yutuyo) {
			System.out.println("Hata Main Metod'ta Yakalandi..");
		}
		System.out.println("Main Metot Sonu..");
	}

	public static void istisna1(int[] dizi) {
		istisna2(dizi);
		System.out.println("Istisna1 Sonu...");
	}

	public static void istisna2(int[] dizi1) {
		System.out.println("Istisna2 Metot Baslangic ....");
		System.out.println("Sayi1 : " + dizi1[0]);
		System.out.println("Sayi2 : " + dizi1[1]);
		System.out.println("Sayi3 : " + dizi1[2]);
		System.out.println("Sayi4 : " + dizi1[3]);
		System.out.println("Hatadan Sonra catch Blogu Isletilir Program durmasin :))");

	}
}

package javaileprogramlama;

public class FinallyBlok_Exceptions {

	public static void main(String[] args) {
		int[] dizi = new int[3];
		dizi[0] = 1;
		dizi[1] = 2;
		dizi[2] = 3;

		try {
			System.out.println("Sayi1 : " + dizi[0]);
			System.out.println("Sayi2 : " + dizi[1]);
			System.out.println("Sayi3 : " + dizi[2]);
			System.out.println("Sayi4 : " + dizi[3]);
			System.out.println("Bunu Yazmicak Cunku Oncesinde Hata Buldu :)");
		} catch (ArrayIndexOutOfBoundsException hataaa) {
			System.out.println("Dizinin Olmayan Elemanina Ulasmaya Calistin !!!");
		} finally {//hata olsun olmasın program dursun durmasin herturlu finally blogu calisiyo :D
			System.out.println("Finally Bloguuuuuuuuuuuu");
		}

		System.out.println("Main Metod Sonu...");

	}

}

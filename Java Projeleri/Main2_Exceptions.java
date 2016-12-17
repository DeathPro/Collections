package javaileprogramlama;

public class Main2_Exceptions {

	public static void main(String[] args) {
		int[] dizi = new int[3];
		dizi[0] = 1;
		dizi[1] = 2;
		dizi[2] = 3;
		try {
			System.out.println("Sayi1 : " + dizi[0]);
			System.out.println("Sayi2 : " + dizi[1]);
			System.out.println("Sayi3 : " + dizi[2]);
			System.out.println("Sayi4 : " + dizi[3]);// bu satiri yorum satiri
			// yaparsan hata olmadigi gorulur ve catch blogu isletilmez :D
			System.out.println("Hatadan Sonra catch Blogu Isletilir Program durmasin :))");
		} catch (ArrayIndexOutOfBoundsException e1) {
			System.out.println("Dizinin Boyutunun Disina Cikmaaaaa");
		}
		System.out.println("Evet Calismadi :D:D");
	}

}

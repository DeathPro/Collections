package javaileprogramlama;

public class Main_JenerikSiniflar3 {

	public static void main(String[] args) {

		String[] stringDizi = { "abc", "def", "ghi", "jkl", "mno" };
		Character[] charDizi = { 'a', 'b', 'c', 'd', 'e' };
		Integer[] intDizi = { 1, 2, 3, 4, 5, 6 };
		Double[] doubleDizi = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };

		diziYaz(stringDizi);
		diziYaz(charDizi);
		diziYaz(intDizi);
		diziYaz(doubleDizi);

	}

	public static void diziYaz(String[] dizi) {
		for (String s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}

	public static void diziYaz(Character[] dizi) {
		for (Character s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}

	public static void diziYaz(Integer[] dizi) {
		for (Integer s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}

	public static void diziYaz(Double[] dizi) {
		for (Double s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}
}

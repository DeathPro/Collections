package javaileprogramlama;

public class Main_JenerikMetotlar {

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

	public static <Genel> void diziYaz(Genel[] dizi) {
		for (Genel s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}

}

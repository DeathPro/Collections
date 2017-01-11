package javaileprogramlama;

class StringDiziYaz {
	public void diziyaz(String[] dizi) {
		for (String s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}
}

class CharacterDiziYaz {
	public void diziyaz(Character[] dizi) {
		for (Character s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}
}

class IntegerDiziYaz {
	public void diziyaz(Integer[] dizi) {
		for (Integer s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}
}

class DoubleDiziYaz {
	public void diziyaz(Double[] dizi) {
		for (Double s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}
}

public class Main_JenerikSiniflar {

	public static void main(String[] args) {
		StringDiziYaz stringdiziyaz = new StringDiziYaz();
		CharacterDiziYaz characterdiziyaz = new CharacterDiziYaz();
		IntegerDiziYaz integerdiziyaz = new IntegerDiziYaz();
		DoubleDiziYaz doublediziyaz = new DoubleDiziYaz();

		String[] stringdizi = { "abc", "def", "ghi", "jkl", "mno" };
		Character[] charDizi = { 'a', 'b', 'c', 'd', 'e' };
		Integer[] intDizi = { 1, 2, 3, 4, 5, 6 };
		Double[] doubleDizi = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };

		stringdiziyaz.diziyaz(stringdizi);
		characterdiziyaz.diziyaz(charDizi);
		integerdiziyaz.diziyaz(intDizi);
		doublediziyaz.diziyaz(doubleDizi);

	}

}

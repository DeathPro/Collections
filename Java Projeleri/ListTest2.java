package javaileprogramlama;

import java.util.ArrayList;

public class ListTest2 {

	public static void main(String[] args) {
		ArrayList<String> liste1 = new ArrayList<String>();
		ArrayList<String> liste2 = new ArrayList<String>();

		for (int i = 0; i <= 4; i++) {
			liste1.add(String.valueOf(i));
		}
		liste1.add(String.valueOf(25));
		System.out.println("Liste 1 : " + liste1.toString());
		for (int i = 0; i <= 7; i++) {
			liste2.add(String.valueOf(i));
		}
		liste2.add(String.valueOf(75));
		System.out.println("Liste 2 : " + liste2.toString());

		liste2.retainAll(liste1);// liste1 ile ortak olanları kendi üstüne
									// yazıyor.
		System.out.println("Liste 1 : " + liste1.toString());
		System.out.println("Liste 2 : " + liste2.toString());
	}

}

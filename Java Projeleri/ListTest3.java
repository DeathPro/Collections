package javaileprogramlama;

import java.util.ArrayList;

public class ListTest3 {

	public static void main(String[] args) {
		ArrayList<String> liste = new ArrayList<String>();

		for (int i = 0; i <= 8; i++) {
			liste.add(String.valueOf(i + 2));
		}
		System.out.println("Liste Uzunluğu : " + liste.size());
		System.out.println("Liste : " + liste.toString());
		System.out.println(liste.get(5));
		liste.set(5, "55");
		System.out.println(liste.get(5));
		System.out.println("Liste : " + liste.toString());
	}
}
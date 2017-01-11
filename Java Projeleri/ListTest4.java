package javaileprogramlama;

import java.util.ArrayList;

public class ListTest4 {

	public static void main(String[] args) {
		ArrayList<String> liste = new ArrayList<String>();

		for (int i = 0; i <= 7; i++) {
			liste.add(String.valueOf(i + 2));
		}
		System.out.println("first element of list=" + liste.get(0));

		for (int i = 0; i < liste.size(); i++) {
			System.out.print(liste.get(i) + " ");
		}
		System.out.println();

		for (String s : liste) {
			System.out.print(s + " ");
		}
	}

}

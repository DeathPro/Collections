package javaileprogramlama;

import java.util.ArrayList;

public class List1 {

	public static void main(String[] args) {
		ArrayList<String> liste1 = new ArrayList<String>();
		ArrayList<String> liste2 = new ArrayList<String>();

		liste1.add("Ahmet");
		liste1.add("Mehmet");
		liste1.add("Ali");
		liste1.add(0, "Veli");

		System.out.println(liste1.toString());
		System.out.println(liste2.toString());
		liste2.addAll(liste1);
		System.out.println(liste2.toString());
		
		liste1.remove("Veli");
		liste1.remove(0);
		System.out.println(liste1.toString());
		liste2.remove(0);
		System.out.println(liste2.toString());
		liste2.removeAll(liste1);//ortak olanları liste2 den siliyor...
		System.out.println(liste2.toString());
		
	}

}

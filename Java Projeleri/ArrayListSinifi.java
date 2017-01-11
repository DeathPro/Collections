package javaileprogramlama;

import java.util.ArrayList;
import java.util.Iterator;

public class ArrayListSinifi {
	public static void main(String[] args) {
		String[] isimDizi = { "Ali", "Veli", "Deli", "Ayse", "Fatma", "Duriye", "Nuriye", "Deli" };
		String[] soyIsimDizi = { "Aliye", "Veli", "Deliye", "Aysegul", "Nuriye" };

		ArrayList<String> isimListesi = new ArrayList<String>();
		ArrayList<String> soyIsimListesi = new ArrayList<String>();

		for (String s : isimDizi) {
			isimListesi.add(s);
		}
		for (String s : soyIsimDizi) {
			soyIsimListesi.add(s);
		}

		Iterator<String> it = isimListesi.listIterator();

		while (it.hasNext()) {
			if (soyIsimListesi.contains(it.next())) {
				it.remove();
			}
		}
		System.out.println("Değişen Dizimizin Son Hali");
		for (String s : isimListesi) {
			System.out.print(s + " ");
		}

	}
}

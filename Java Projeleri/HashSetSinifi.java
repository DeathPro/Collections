package javaileprogramlama;

import java.util.HashSet;;

public class HashSetSinifi {

	public static void main(String[] args) {
		String[] dizi = { "ali", "veli", "deli", "ayse", "fatma" };

		HashSet<String> kume = new HashSet<String>();
		for (String s : dizi) {
			System.out.print(s + " ");
			kume.add(s); // add fonksiyonu true-false deger dondurur.
		}
		System.out.println();
		System.out.println("Kume Boyutu : " + kume.size());

	}

}

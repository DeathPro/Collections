package javaileprogramlama;

import java.util.HashSet;;

public class HashSetSinifi2 {

	public static void main(String[] args) {
		String[] Dizi = { "ali", "veli", "deli", "ayse", "fatma", "deli" };
		HashSet<String> kume = new HashSet<String>();

		for (String s : Dizi) {
			System.out.print(s + " ");
			kume.add(s);
		}
		System.out.println("\nKumenin Boyutu : " + kume.size());// aynisindan 2
																// tane varsa
																// bidaha onu
																// saymaz
		System.out.println();
	}

}

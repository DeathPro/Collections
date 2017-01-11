package javaileprogramlama;

import java.util.HashSet;

public class HashSetSinifi3 {

	public static void main(String[] args) {
		String[] Dizi = { "ali", "veli", "deli", "ayse", "fatma", "deli" };

		HashSet<String> kume = new HashSet<String>();

		for (String s : Dizi) {
			if (kume.add(s)) {
				System.out.println(s + " Koleksiyona Eklenmiştir.");
			}else{
				System.out.println(s + " Koleksiyon da Bulunduğundan Eklenememiştir.");
			}
		}
	}

}

package javaileprogramlama;

import java.util.HashSet;
import java.util.Iterator;

public class HashSetSinifi4 {

	public static void main(String[] args) {
		String[] Dizi = { "ali", "veli", "deli", "ayse", "fatma", "deli", "asdasd", "qweqwe" };

		HashSet<String> kume = new HashSet<String>();
		System.out.println("For Döngüsü Kullanıldığında ");
		for (String s : Dizi) {
			System.out.print(s + " ");
			kume.add(s);
		}
		System.out.println("\n Iterator metodunu Kullandıgımızda ");
		Iterator<String> it = kume.iterator();
		
		while (it.hasNext()) {
			//System.out.println(Dizi);//adres gosterir
			//System.out.println(it);//Dizinin adresini gosteriyorrrr....
			System.out.print(it.next() + " ");//Hashset te bozuk gösteriyor iterator :S
		}
	}
}

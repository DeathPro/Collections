package javaileprogramlama;


import java.util.Iterator;
import java.util.LinkedHashSet;

public class LinkedHashSet1 {

	public static void main(String[] args) {
		String[] Dizi = { "ali", "veli", "deli", "ayse", "fatma", "deli", "asdasd", "qweqwe" };

		LinkedHashSet<String> kume = new LinkedHashSet<String>();
		
		System.out.println("For Döngüsü Kullanıldığında ");
		for (String s : Dizi) {
			System.out.print(s + " ");
			kume.add(s);
		}
		System.out.println("\n Iterator metodunu Kullandıgımızda ");
		Iterator<String> it = kume.iterator();

		while (it.hasNext()) {
			// System.out.println(Dizi);//adres gosterir
			// System.out.println(it);//Dizinin adresini gosteriyorrrr....
			System.out.print(it.next() + " ");
			//HashSet te karışık gösteriyodu iterator ama 
			//burda düzgün gösteriyor...
											
		}
	}
}

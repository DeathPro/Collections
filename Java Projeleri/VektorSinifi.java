package javaileprogramlama;

import java.util.Enumeration;
import java.util.Vector;

public class VektorSinifi {
	public static void main(String[] args) {
		Vector<String> vektor = new Vector<String>();

		vektor.add("1");
		vektor.add("2");
		vektor.add("3");
		vektor.add("4");
		vektor.add("5");

		vektor.add(3, "3333");

		System.out.println("Ilk Eleman : " + vektor.firstElement());

		System.out.println("Son Eleman : " + vektor.lastElement());

		System.out.println("Vektörün Uzunluğu : " + vektor.size());

		System.out.println("Vektörün Elemanları : " + vektor.toString());

		Enumeration e = vektor.elements();

		while (e.hasMoreElements()) {
			System.out.println("Vektörün Elemanları --> " + e.nextElement());
		}
	}
}

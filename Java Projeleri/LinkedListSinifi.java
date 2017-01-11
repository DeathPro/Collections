package javaileprogramlama;

import java.util.LinkedList;
import java.util.ListIterator;

public class LinkedListSinifi {
	public static void main(String[] args) {
		LinkedList<String> liste = new LinkedList<String>();

		liste.add("1");
		liste.add("2");
		liste.add("3");
		liste.add("4");
		liste.add("5");
		liste.add(3, "33");

		System.out.println("Birinci Eleman : " + liste.getFirst());
		liste.addFirst("001");

		System.out.println("Son Eleman : " + liste.removeLast());

		ListIterator<String> it = liste.listIterator();

		while (it.hasNext()) {
			System.out.print(it.next() + ", ");
		}
		System.out.print("\n\n\n");

		// sondan başa doğru gitmek için
		it = liste.listIterator(liste.size());
		// it iteratörü listenin sonunda.

		while (it.hasPrevious()) {
			System.out.print(it.previous() + ", ");
		}

	}
}

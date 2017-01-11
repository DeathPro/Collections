package javaileprogramlama;

import java.util.List;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.ListIterator;

public class ListTest6 {
	public static void main(String[] args) {

		ArrayList<String> list = new ArrayList<String>();

		for (int i = 0; i <= 9; i++) {
			list.add(String.valueOf(i));
		}
		Iterator<String> it = list.listIterator();
		// ListIterator<String> it = list.listIterator();

		it.next();
		it.next();

		while (it.hasNext()) {
			System.out.print(it.next());
		}

	}
}
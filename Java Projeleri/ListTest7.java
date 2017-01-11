package javaileprogramlama;

//import java.util.List;
import java.util.ListIterator;
import java.util.ArrayList;
//import java.util.Collection;
//import java.util.Iterator;

public class ListTest7 {
	public static void main(String[] args) {

		ArrayList<String> list = new ArrayList<String>();
		list.add("1");
		list.add("2");
		list.add("3");
		list.add("4");
		list.add(1, "5");

		System.out.println("element at 2nd position: " + list.get(2));

		// Iterator<String> it = list.listIterator();
		// normal Iterator da previous yok

		ListIterator<String> it = list.listIterator();
		// bundan dolayı sen listelerde ListIterator kullan zaten kullanılması
		// aynı....
		while (it.hasNext()) {
			System.out.print(it.next() + " ");
		}

		System.out.println("\n");
		it = list.listIterator(list.size());//it sonunu gösteriyor...
		while (it.hasPrevious()) {
			System.out.print(it.previous() + " ");
		}
	}
}

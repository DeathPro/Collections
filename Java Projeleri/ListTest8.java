package javaileprogramlama;

//import java.util.List;
import java.util.LinkedList;

public class ListTest8 {
	public static void main(String[] args) {
		String[] colors = { "black", "yellow", "green", "blue", "violet", "silver" };
		LinkedList<String> list = new LinkedList<String>();
		list.clear();

		print(list); // print list1 elements
		for (String color : colors) { // color="black yellow green blue violet
										// silver"
			list.add(color);
		}

		print(list); // print list1 elements
		System.out.println(list.subList(1, 5));
		list.subList(1, 5).clear();
		print(list); // print list1 elements
	}

	private static void print(LinkedList<String> list) {

		for (String color : list)
			System.out.printf("%s ", color);

		System.out.println();
	}

}
package javaileprogramlama;

public class Array {
	public static void main(String[] args) {

		String[] name = new String[4];
		String[] city = { "Ankara", "İstanbul", "Bolu", "Trabzon" };

		name[0] = "Mehmet";
		name[2] = "Hatice";
		name[3] = "Nalan";
		//name[4] = "Aylin";
		name[1] = "Ali";

		System.out.println("name     city");
		System.out.println("-----    -----");

		for (int i = 0; i < 4; i++) {
			System.out.println(name[i] + "    " + city[i]);
		}

	}
}
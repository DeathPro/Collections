package javaileprogramlama;

public class Abakus {

	public static void main(String[] args) {
		int sayac = 0, toplam = 0;
		// while(sayac<=100)
		// {
		// toplam = toplam + sayac;
		// sayac++;
		// }
		// System.out.println(toplam);
		for (sayac = 1; sayac <= 100; sayac++)
			System.out.print(sayac + "\t");
		System.out.println();
		for (sayac = 100; sayac >= 1; sayac--)
			System.out.print(sayac + "\t");
	}

}

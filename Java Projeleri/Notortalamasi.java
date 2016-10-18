package javaileprogramlama;

import java.util.Scanner;

public class Notortalamasi {

	public static void main(String[] args) {
		Scanner not = new Scanner(System.in);

		double vnot = 0, fnot = 0, toplam = 0;

		System.out.print("Vize Notunu Giriniz: ");
		vnot = not.nextInt();
		System.out.print("\nFinal Notunu Giriniz: ");
		fnot = not.nextInt();
		toplam = vnot * 0.4 + fnot * 0.6;
		System.out.println(toplam);
		if (toplam >= 60)
			System.out.print("\nGecti");
		else
			System.out.print("\nKaldi");

	}

}

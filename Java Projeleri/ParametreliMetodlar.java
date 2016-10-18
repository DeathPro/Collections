package javaileprogramlama;

import java.util.Scanner;

public class ParametreliMetodlar {

	public static int farkiniAl(int x, int y) {
		int toplam = x - y;

		if (x > y)
			toplam = x - y;
		else
			toplam = y - x;
		return toplam;
	}

	public static void main(String[] args) {
		int a = 0;
		int b = 0;

		Scanner sayi = new Scanner(System.in);
		System.out.print("Bir Sayi Giriniz: ");
		a = sayi.nextInt();
		System.out.print("\nBir Sayi Giriniz: ");
		b = sayi.nextInt();

		System.out.println(farkiniAl(a, b));

	}

}

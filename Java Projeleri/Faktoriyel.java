package javaileprogramlama;

import java.util.Scanner;

public class Faktoriyel {

	public static void main(String[] args) {
		int sayi = 0;
		Scanner s1 = new Scanner(System.in);
		int sayac = 0;
		System.out.print("Faktoeiyeli Alinacak Sayiyi Giriniz: ");
		sayi = s1.nextInt();
		int a;
		a = sayi;
		while (true) {
			if (sayi < 0) {
				System.err.print("Negatif Sayi Girme !!!\n");
				System.out.print("Faktoeiyeli Alinacak Sayiyi Giriniz: ");
				sayi = s1.nextInt();
				a = sayi;
				continue;
			} else {
				for (sayac = sayi - 1; sayac >= 1; sayac--)
					sayi = sayi * sayac;

				System.out.print(a + "! = " + sayi);

			}
			break;

		}
	}

}

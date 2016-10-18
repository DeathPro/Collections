package javaileprogramlama;

import java.util.Scanner;

public class Toplam {

	public static void main(String[] args) {
		Scanner tara = new Scanner(System.in);

		int x=0,y=0,toplam=0;
		
		System.out.print("1. Sayiyi Giriniz: ");
		x = tara.nextInt();
		System.out.print("\n2. Sayiyi Giriniz: ");
		y = tara.nextInt();
		toplam = x+y;
		System.out.print("\nToplamlari : " + toplam);

	}

}

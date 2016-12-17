package javaileprogramlama;

import java.util.Scanner;

public class DikMain {

	public static void main(String[] args) {
		Scanner sayi = new Scanner(System.in);
		Dikdortgen alan = new Dikdortgen();
		System.out.print("Bir Dikdortgenin Enini Giriniz: ");
		alan.setEn(sayi.nextDouble());
		System.out.print("Bir Dikdortgenin Boyunu Giriniz: ");
		alan.setBoy(sayi.nextDouble());
		System.out.println("Dikdortgenin Alani : " + alan.DikdortgenAlan());
		System.out.println("Girilen Dikdortgen Eni : " + alan.getEn());
		System.out.println("Girilen Dikdortgen Boyu : " + alan.getBoy());

	}

}

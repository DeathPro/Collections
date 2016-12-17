package javaileprogramlama;

import java.util.*;

public class Timee {

	public static void main(String[] args) {
		TimeClasss zaman = new TimeClasss();

		Scanner sayi = new Scanner(System.in);
		System.out.println("Sirasi Ile Zaman Dilimini Giriniz (Saat,Dakika,Saniye)");
		zaman.setAll(sayi.nextInt(), sayi.nextInt(), sayi.nextInt());

		zaman.displayTime("Time");

	}

}

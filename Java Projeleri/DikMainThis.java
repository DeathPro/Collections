package javaileprogramlama;

import java.util.*;

public class DikMainThis {

	public static void main(String[] args) {
		DikdortgenThis sayilar = new DikdortgenThis();
		System.out.print("Bir Dikdortgen En Degeri Giriniz : ");
		Scanner sayi = new Scanner(System.in);
		sayilar.setEn(sayi.nextDouble());
		System.out.print("Bir Dikdortgen Boy Degeri Giriniz : ");
		sayilar.setBoy(sayi.nextDouble());
		System.out.println("Dikdortgen En Degeri : " + sayilar.getEn());
		System.out.println("Dikdortgen Boy Degeri : " + sayilar.getBoy());
		System.out.println("Dikdortgenin Alani : " + sayilar.DikdortgenAlani());

	}

}

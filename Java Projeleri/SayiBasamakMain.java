package javaileprogramlama;

import java.util.*;

public class SayiBasamakMain {

	public static void main(String[] args) {
		SayiBasamak sayi1 = new SayiBasamak();
		Scanner s = new Scanner(System.in);
		System.out.print("Bir Sayi Giriniz : ");
		sayi1.sayi = s.nextInt();
		// while (sayi1.sayi!=0)
		sayi1.digit(sayi1.sayi);

	}

}

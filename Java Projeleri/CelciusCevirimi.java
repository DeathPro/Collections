package javaileprogramlama;

import java.util.Scanner;

public class CelciusCevirimi {
	public static void Cf() {
		double sicaklik = 0.0;
		Scanner der = new Scanner(System.in);
		System.out.println("Bir Sicaklik Degeri Giriniz: ");
		sicaklik = der.nextDouble();
		System.out.println("Girdiginiz Celsius Degeri : " + sicaklik);
		sicaklik = sicaklik * 1.8 + 32;
		System.out.println("Celsius to Fahrenheit: " + sicaklik);
	}

	public static void Fc() {
		double sicaklik = 0.0;
		Scanner der = new Scanner(System.in);
		System.out.println("Bir Sicaklik Degeri Giriniz: ");
		sicaklik = der.nextDouble();
		System.out.println("Girdiginiz Fahrenheit Degeri : " + sicaklik);
		sicaklik = (sicaklik - 32) * 0.56;
		System.out.println("Fahrenheit to Celsius: " + sicaklik);
	}

	public static void main(String[] args) {
		Scanner sayi = new Scanner(System.in);
		int a = 1;
		int b = 0;
		while (true) {
			System.out.println("1-)Fahrenheit to Celsius\n2-)Celsius to Fahrenheit\n3-)Exit\n");
			a = sayi.nextInt();
			switch (a) {
			case 1:
				Fc();
				break;
			case 2:
				Cf();
				break;
			case 3:
				b = 1;
				break;
			}
			if (b == 1)
				break;

		}
	}

}

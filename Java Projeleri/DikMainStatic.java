package javaileprogramlama;

import java.util.Scanner;

public class DikMainStatic {

	public static void main(String[] args) {
		System.out.println("nesne sayisi = " + DikdortgenStatic.getNesneSayisi());
		DikdortgenStatic nesne = new DikdortgenStatic(); // o sinifta bir nesne
															// olusturduktan
															// sonra
															// nesne sayimiz 1
															// artti.
		System.out.println("static degiskenimize sinif uzerinden erisim");
		System.out.println("nesne sayisi = " + DikdortgenStatic.getNesneSayisi());
		//metodu statick olarak tanimladigimizda direk siniftan cagirabiliyoruz.
		DikdortgenStatic nesne2 = new DikdortgenStatic();
		
		System.out.println("static degiskenimize sinif uzerinden erisim");
		System.out.println("nesne sayisi = " + nesne2.getNesneSayisi());
		System.out.println("nesne sayisi = " + nesne.getNesneSayisi());
		System.out.println("nesne sayisi = " + nesne2.getNesneSayisi());
	}

}

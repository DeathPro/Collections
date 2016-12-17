package javaileprogramlama;

public class Personel_Main_Exceptions {

	public static void main(String[] args) {
		try{
			Personel_Exceptions personel = new Personel_Exceptions(20);
			System.out.println("Personelin Yasi : " + personel.getYas());
			
			Personel_Exceptions personel2=new Personel_Exceptions(-20);
			System.out.println("Personel2 nin Yasi : " + personel2.getYas());
			
			Personel_Exceptions personel3 = new Personel_Exceptions(55);
			System.out.println("Personel3 un Yasi : " + personel3.getYas());
		}
		catch(IllegalArgumentException istisna){// buradaki  throwla firlatildigindan
			//Sanki bi metoda yollamis gibi istersen degisken ismini degistirebilirsin.
			
			//getMessage metodu ile hata mesajini ekrana yazdiracam.
			System.out.println(istisna.getMessage());
			//Simdide toString metoduyla hata mesajini ekrana yazdirak.
			System.out.println(istisna.toString());
			
		}

	}

}

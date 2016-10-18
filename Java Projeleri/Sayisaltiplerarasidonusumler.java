package javaileprogramlama;

public class Sayisaltiplerarasidonusumler {

	public static void main(String[] args) {
		// int intsayi;
		// float floatsayi = 3.23f; // oradaki f float oldugunu kanitlamak
		// icin...
		// double doublesayi = 12.12;
		//
		// intsayi = (int) floatsayi ;
		//
		// System .out.println("floatsayi = " + floatsayi );
		// System .out.println("intsayi = " + intsayi );
		// System .out .println ("doublesayi = " + doublesayi );

		// String Tipinin sayısal tiplere donusumu

		// String s1 = "12";
		// String s2 = "13";
		//
		// int intDonusum1 = Integer.valueOf(s1); // String bi degeri sayisal
		// veri tipine cevirirken
		// // o veri tipinin Nesne hali kullaniliyorr....
		// (Integer,Float,Double.....)
		// int intDonusum2 = Integer .parseInt(s2); //valueOf daha guzel
		//
		// System .out .println ("intDonusum1 = " + intDonusum1 );
		// System .out .println ("intDonusum2 = " + intDonusum2 );
		//
		// float floatDonusum1 = Float.valueOf(s1);
		// float floatDonusum2 = Float.valueOf(s2);
		// double doubleDonusum1 = Double.valueOf(s1);
		// double doubleDonusum2 = Double.valueOf(s2);
		//
		// System .out .println ("floatDonusum1 = " + floatDonusum1 );
		// System .out .println ("floatDonusum2 = " + floatDonusum2 );
		// System .out .println ("doubleDonusum1 = " + doubleDonusum1 );
		// System .out .println ("doubleDonusum2 = " + doubleDonusum2 );
		//

		// sayisal veri tiplerinin string tipe donusturulmesi
		int donusum = 15;
		float donusumf = 15.5f;
		double donusumd = 15.15;

		String stringDonusumInt = "" + donusum;
		String stringDonusumInt1 = String.valueOf(donusum); 
															
		String stringDonusumInt2 = Integer.toString(donusum);
		String stringDonusumFloat = donusumf + "";
		String stringDonusumFloat1 = String.valueOf(donusumf);
		String stringDonusumFloat2 = Float.toString(donusumf);
		String stringDonusumDouble = donusumd + "";
		String stringDonusumDouble1 = String.valueOf(donusumd);
		String stringDonusumDouble2 = Double.toString(donusumd);

		System.out.println("StringDonusumInt1 = " + stringDonusumInt1);
		System.out.println("StringDonusumFloat1 = " + stringDonusumFloat1);
		System.out.println("StringDonusumDouble1 = " + stringDonusumDouble1);
		// Digerleride ayni sonucu veriyor....
	}

}

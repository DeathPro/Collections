package javaileprogramlama;

public class IfThenElse
{
	public static void main(String[] args)
	{
		int a = 24;
		int b = 3;
		int c = 99;
		int d = 1;
		int e = (b >= 3) ? 111 : (a / b); // degisken = (deger1 == deger2)? (x) : (y);
		int f = (d <= 1) ? 0 : (c / b);
		int g = (d == 0) ? 0 : (c / b);

		System.out.println("e = " + e);
		System.out.println("f = " + f);
		System.out.println("g = " + g);

	}
}
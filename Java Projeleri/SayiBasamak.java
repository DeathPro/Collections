package javaileprogramlama;

public class SayiBasamak {
	public int sayi;

	public void digit(int x)

	{

		int temp;
		System.out.print("Digist Are = ");
		for (int i = 0; x != 0; i++) {
			temp = x % 10;
			System.out.print("\t" + temp);
			x = x / 10;
		}
		System.out.println("\n");
	}
}

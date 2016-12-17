package javaileprogramlama;

public class Week5Lab {

	public static void main(String[] args) {
		int j = 10;
		int i = 0;
		int k = 10;
		for (i = 0; i < 11; i++) {

			j = j - i;
			while (j < 10) {
				System.out.print("*");
				j++;
			}
			System.out.println();
		}
		System.out.println();
		j = 0;
		for (i = 0; i < 11; i++) {
			j = 0;
			j = j + i;
			while (j < 10) {
				System.out.print("*");
				j++;
			}
			System.out.println();
		}

		for (i = 0; i < 11; i++) {
			j = 0;
			j = j + i;
			k = k - i;
			while (k < 10) {
				System.out.print(" ");
				k = k + 1;
			}
			while (j < 10) {
				System.out.print("*");
				j++;
			}
			System.out.println();
		}
		k = 9;
		System.out.println();

		for (i = 0; i < 11; i++) {

			j = j - i;
			k = 9;
			k = k - i;
			while (k >= 0) {
				System.out.print(" ");
				k = k - 1;

			}
			while (j < 10) {
				System.out.print("*");
				j++;
			}
			System.out.println();
		}
	}

}

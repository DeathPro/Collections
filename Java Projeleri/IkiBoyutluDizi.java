package javaileprogramlama;

public class IkiBoyutluDizi {
	public static void main(String[] args) {
		int[][] a = new int[5][4];
		int i = 0;
		int j = 0;

		for (i = 0; i < 5; i++) {
			for (j = 0; j < 4; j++) {
				a[i][j] = (int) (Math.random() * 100);// parantezlere dikkat
			}
		}
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 4; j++) {
				System.out.print(a[i][j] + "\t");
			}
			System.out.println();
		}

	}
}

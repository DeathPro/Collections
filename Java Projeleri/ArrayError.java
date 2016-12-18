package javaileprogramlama;

public class ArrayError {

	public static void main(String[] args) {
		String[] days = new String[3];
		days[0] = "zxczxc";
		days[1] = "sadasd";
		days[2] = "qweqweqwe";
		//days[3] = "ogfmhpofmh";

		try {
			System.out.println("gunler : " + days[0]);
			System.out.println("gunler : " + days[1]);
			System.out.println("gunler : " + days[2]);
			System.out.println("gunler : " + days[3]);
			System.out.println("yazmaması lazım....");
			days[3] = "ogfmhpofmh";
			System.out.println("yazmaması lazım....");

		} catch (ArrayIndexOutOfBoundsException HataDurumu) {
			System.out.println(HataDurumu.toString());
		}
		System.out.println("Main metot sonu");
	}
}
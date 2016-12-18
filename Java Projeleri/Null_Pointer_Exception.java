package javaileprogramlama;

class A {
	private int x;

	A() {

	}

	A(int x) {
		this.x = x;
	}

	public int getX() {
		return x;
	}

}

public class Null_Pointer_Exception {
	public static void main(String[] args) {
		try {
			A a;
			int y;
			y = 0;

			if (y == 0) {
				a = null;
			} else {
				a = new A();
			}
			System.out.println(a.getX());
		} catch (Exception ex) {
			System.out.println(ex.toString());
		}
		System.out.println("codes are running");
		/*
		 * A a;
		 * 
		 * int y; y = 0;
		 * 
		 * if (y == 0) { a = null; } else { a = new A(15); }
		 * System.out.println(a.getX());
		 */

	}
}

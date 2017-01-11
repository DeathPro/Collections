package javaileprogramlama;

class A { // bunu public class olarak tanimlayamassin. public class
			// tanimlicaksan baska dosyada yaparsin.
	public static int i;

	A() {
		i = 10;
	}

	public static void display() {
		i++;
		System.out.println("i = " + i);
	}
}

public class StaticDersTest {

	public static void main(String[] args) {
		A.i = 0;
		A a0 = new A();
		A a1 = new A();
		
		//a0.i=5;
		//A.i=11;
		a0.display();
		a1.display();
		A.display();

	}

}

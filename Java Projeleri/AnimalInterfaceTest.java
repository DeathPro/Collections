package javaileprogramlama;

interface AnimalInterface {
	public void eat();

	public void travel();
}

class Animal implements AnimalInterface {
	private int legs;

	public void eat() {
		System.out.println("animal eats");
	}

	public void travel() {
		System.out.println("animal travels with " + numberOfLegs() + " legs");
	}

	public int numberOfLegs() {
		return legs;
	}

}

public class AnimalInterfaceTest {

	public static void main(String[] args) {
		Animal an = new Animal();
		an.eat();
		an.travel();
	}
}
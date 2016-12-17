package javaileprogramlama;

abstract class Animal {
	private String name;

	public Animal(String name) {
		this.name = name;
	}

	public String speak() {
		return name + " says " + sound();
	}

	public abstract String sound();
}

class Cow extends Animal {
	public Cow(String name) {
		super(name);
	}

	public String sound() {
		return "moooooo";
	}
}

class Horse extends Animal {
	public Horse(String name) {
		super(name);
	}

	public String sound() {
		return "neigh";
	}
}

class Sheep extends Animal {
	public Sheep(String name) {
		super(name);
	}

	public String sound() {
		return "baaaa";
	}
}

public class AnimalTestAbstract {

	public static void main(String[] args) {

		Animal h = new Horse("CJ");
		Animal c = new Cow("Bessie");
		Animal s = new Sheep("Little Lamb");

		System.out.println(h.speak());
		System.out.println(c.speak());
		System.out.println(s.speak());

		// Animal s = new Animal(); // error Animal is abstract cannot be
		// instantiated
	}
}
package javaileprogramlama;

class Animal {
	private String name;

	public Animal(String name) {
		this.name = name;
	}

	public String speak() {
		return name + " says " + sound();
	}

	public String sound() {
		return "null";
	}
}

class Cow extends Animal {
	public Cow(String name) {
		super(name);// superclass ta name private tanımlandığından direk
					// erişemessinnn ondan böyle erişiyorsun !!!
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

public class AnimalTestPoly2 {

	public static void main(String[] args) {

		Animal h = new Horse("CJ");
		Animal c = new Cow("Bessie");
		Animal s = new Sheep("Little Lamb");
		System.out.println(metod(h));
		System.out.println(metod(c));
		System.out.println(metod(s));
	}

	public static String metod(Animal a) {
		return a.speak();
	}
}

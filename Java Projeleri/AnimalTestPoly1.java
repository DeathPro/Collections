package javaileprogramlama;

class Animal {
	protected String name;

	public String speak() {
		return name + " says " + sound();
	}

	public String sound() {
		return "null";
	}
}

class Cow extends Animal {
	public Cow(String name) {
		this.name = name;
	}

	public String sound() {
		return "moooooo";
	}
}

class Horse extends Animal {
	public Horse(String name) {
		this.name = name;
	}

	public String sound() {
		return "neigh";
	}
}

class Sheep extends Animal {
	public Sheep(String name) {
		this.name = name;
	}

	public String sound() {
		return "baaaa";
	}
}

public class AnimalTestPoly1 {

	public static void main(String[] args) {
		Horse h = new Horse("CJ");
		Cow c = new Cow("Bessie");
		Sheep s = new Sheep("LittleLamb");

		System.out.println(h.speak());
		System.out.println(c.speak());
		System.out.println(s.speak());

	}

}

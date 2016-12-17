package javaileprogramlama;

public class CompositionEmployee {

	private String name;
	private CompositionDate bday;

	public CompositionEmployee(String name, CompositionDate bday) {
		this.name = name;
		this.bday = bday;
	}

	public String toString() {
		return String.format("%s %s", name, bday);
	}
}

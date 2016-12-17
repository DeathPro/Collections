package javaileprogramlama;

public class CompositionDate {
	private int month;
	private int day;
	private int year;

	public CompositionDate(int month, int day, int year) {

	}

	public String toString() {
		return String.format("%d.%d.%d", month, day, year);
	}
}

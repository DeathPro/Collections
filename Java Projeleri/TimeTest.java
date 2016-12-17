package javaileprogramlama;

class Time {
	private int hour; // 0 - 23
	private int minute; // 0 - 59
	private int second; // 0 - 59

	public void setTime(int hour, int minute, int second) {
		this.hour = hour;
		this.minute = minute;
		this.second = second;
	}

	public String toUniversalString() {
		// String s;
		return String.format("%02d:%02d:%02d", hour, minute, second);
		// return s;
	}

	// convert to String in standard-time format (H:MM:SS AM or PM)
	public String toString() {
		return String.format("%02d:%02d:%02d %s", ((hour == 0 || hour == 12) ? 12 : hour % 12), minute, second,
				(hour < 12 ? "AM" : "PM"));
	}

	public void displayTime(String header) {
		System.out.println(header);
		System.out.println("Universal time: " + toUniversalString());
		System.out.println("Standard time: " + toString());
	}
}

public class TimeTest {
	public static void main(String[] args) {
		Time time = new Time();
		time.displayTime("After time object is created");

		time.setTime(15, 29, 59);
		time.displayTime("After calling set Time");
	}
}

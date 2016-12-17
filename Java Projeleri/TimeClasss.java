package javaileprogramlama;

public class TimeClasss {
	private int hour;
	private int minute;
	private int second;

	public void setAll(int hour, int minute, int second) {
		this.hour = hour;
		this.minute = minute;
		this.second = second;
	}

	public String toUniversalString() {
		return String.format("%02d:%02d:%02d", hour, minute, second);
	}

	public String toStandardString() {
		return String.format("%02d:%02d:%02d  %s", ((hour == 12 || hour == 0) ? 12 : (hour % 12)), minute, second,
				((hour < 12 && hour >= 0) ? "AM" : "PM"));
		// String.format degiskenleri(integer gibi) stringe cevirip
		// dondurur.Yazimida bu sekilde "%d",hour .... c deki printf gibi..
	}

	public void displayTime(String header) {
		System.out.println(header);
		System.out.println("Universal Time : " + toUniversalString());
		System.out.println("Standard Time : " + toStandardString());
	}

}

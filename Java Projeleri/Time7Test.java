package javaileprogramlama;

import java.util.Scanner;

class Time7 {
	private int hour;
	private int minute;
	private int second;

	public Time7() {

	}

	public Time7(int hour) {
		this.hour = hour;
	}

	public Time7(int hour, int minute) {
		this.hour = hour;
		this.minute = minute;
	}

	public Time7(int hour, int minute, int second) {
		this.hour = hour;
		this.minute = minute;
		this.second = second;
	}

	public Time7(Time7 time) {
		this.hour = time.hour;
		this.minute = time.minute;
		this.second = time.second;
	}

	public void displayTime(String hd) {
		System.out.println(hd + hour + ":" + minute + ":" + second);
	}

	public int getHour() {
		return hour;
	}

	public int getMinute() {
		return minute;
	}

	public int getSecond() {
		return second;
	}
}

public class Time7Test {

	public static void main(String[] args) {

		Time7 t0 = new Time7();
		Time7 t1 = new Time7(13);
		Time7 t2 = new Time7(13, 25);
		Time7 t3 = new Time7(13, 25, 58);
		Time7 tt = new Time7(t2);

		t0.displayTime("Time t0 = ");
		t1.displayTime("Time t1 = ");
		t2.displayTime("Time t2 = ");
		t3.displayTime("Time t3 = ");
		tt.displayTime("Time tt = ");
	}

}

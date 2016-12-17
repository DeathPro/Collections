package javaileprogramlama;

public class DikReferance {
	private double en;
	private double boy;

	

	public DikReferance(double x, double y) {
		this.en = x;
		this.boy = y;
	}

	public double getEn() {
		return this.en;
	}

	public void setEn(double en) {
		this.en = en;
	}

	public double getBoy() {
		return this.boy;
	}

	public void setBoy(double boy) {
		this.boy = boy;
	}

	public double DikAlan() {
		return this.en * this.boy;
	}
}

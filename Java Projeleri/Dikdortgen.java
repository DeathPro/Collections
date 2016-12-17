package javaileprogramlama;

public class Dikdortgen {

	private double en;
	private double boy;

	public double getEn() {
		return en;
	}

	public void setEn(double x) {
		if (x > 0)
			en = x;
		else
			en = 0;
	}

	public double getBoy() {
		return boy;
	}

	public void setBoy(double y) {
		if (y > 0)
			boy = y;
		else
			boy = 0;
	}

	public double DikdortgenAlan() {
		return en * boy;
	}

}

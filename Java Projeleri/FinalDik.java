package javaileprogramlama;

public class FinalDik {
	public final double en;
	public final double boy;

	public FinalDik() {
		this.en = 0;
		this.boy = 0;
	}

	public FinalDik(double x, double y) {
		this.en = x;
		this.boy = y;
	}

	public double FinalDikAlan() {
		return this.en * this.boy;
	}
}

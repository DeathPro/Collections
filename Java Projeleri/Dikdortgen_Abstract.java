package javaileprogramlama;

public class Dikdortgen_Abstract extends Sekiller_Absract {
	private double en;
	private double boy;

	public Dikdortgen_Abstract() {
		en = 0;
		boy = 0;
	}

	public Dikdortgen_Abstract(double x, double y) {
		setEn(x);
		setBoy(y);
	}

	public double getBoy() {
		return boy;
	}

	public void setBoy(double boy) {
		if (boy > 0)
			this.boy = boy;
		else
			this.boy = 0;
	}

	public double getEn() {
		return en;
	}

	public void setEn(double en) {
		if (en > 0)
			this.en = en;
		else
			this.en = 0;
	}

	public double alanHesaplama() {
		return en * boy;
	}
}

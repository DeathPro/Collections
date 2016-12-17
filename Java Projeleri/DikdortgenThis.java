package javaileprogramlama;

public class DikdortgenThis {
	private double en;
	private double boy;

	public double getEn() {
		return this.en;
	}

	public void setEn(double en) {
		if (en > 0)
			this.en = en;// this anahtari eger metodun parametresindeki ile
							// class ta tanimlanan
		// ayniysa this kullanilir.this bu classta oluşturulan degiskeni
		// gosterir.
		// en = en; yanlis olurdu kendisine atama yapardi.this ile bunu onledik.
		else
			this.en = 0;
	}

	public double getBoy() {
		return this.boy;
	}

	public void setBoy(double boy) {
		if (boy > 0)
			this.boy = boy;
		else
			this.boy = 0;
	}

	public double DikdortgenAlani() {
		return this.en * this.boy; // burda this kullanmasanda olur .
	}

}

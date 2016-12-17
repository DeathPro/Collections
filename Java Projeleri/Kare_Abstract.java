package javaileprogramlama;

public class Kare_Abstract extends Sekiller_Absract {
	private double kenarUzunlugu;

	public Kare_Abstract() {
		kenarUzunlugu = 0;
	}

	public Kare_Abstract(double x) {
		setKenarUzunlugu(x);
	}

	public double getKenarUzunlugu() {
		return kenarUzunlugu;
	}

	public void setKenarUzunlugu(double kenarUzunlugu) {
		if (kenarUzunlugu > 0)
			this.kenarUzunlugu = kenarUzunlugu;
		else
			this.kenarUzunlugu = 0;
	}

	public double alanHesaplama() {
		return kenarUzunlugu * kenarUzunlugu;
	}

}

package javaileprogramlama;

public class Kare_Polymorphism extends Sekiller_Polymorphism {

	private double kenarUzunlugu;

	public Kare_Polymorphism() {
		kenarUzunlugu = 0;
	}

	public Kare_Polymorphism(double x) {
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

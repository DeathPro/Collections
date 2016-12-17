package javaileprogramlama;

public class Kare_Interface implements Karsilastirma_Interface {
	private double kenaruzunlugu;

	public Kare_Interface() {
		kenaruzunlugu = 0;
	}

	public Kare_Interface(double x) {
		setKenarUzunlugu(x);
	}

	public double getKenarUzunlugu() {
		return kenaruzunlugu;
	}

	public void setKenarUzunlugu(double kenaruzunlugu) {
		if (kenaruzunlugu > 0)
			this.kenaruzunlugu = kenaruzunlugu;
		else
			this.kenaruzunlugu = 0;
	}

	public double alanHesaplama() {
		return kenaruzunlugu * kenaruzunlugu;
	}

	// karsilastir metodunu override ediyoruz.
	// bu metot alana gore karsilastirma yapmakta
	// parametre olarak verilen Nsn nesnesi Kare_Interface referansina atayalim
	// ve karsilastiralim.
	public String karsilastir(Object Nsn) {
		// burda karsilastirma icin interface kurallarini kullanmaya gerek yok
		// buradaki parametre tipini Kare_Interface yap
		// sinifida implements yapma
		// bu metot'ta kare yazan yerlere Nsn yazarsin
		// aynisi.
		Kare_Interface kare = (Kare_Interface) Nsn;

		if (this.alanHesaplama() > kare.alanHesaplama()) {
			return "Asil Nesnenin Sahip Oldugu Alan Parametredeki Nesnenin Alanindan Buyuktur\n";
		} else if (this.alanHesaplama() < kare.alanHesaplama()) {
			return "Asil Nesnenin Sahip Oldugu Alan Parametredeki Nesnenin Alanindan Kucuktur\n";
		} else {
			return "Nesnelerin Sahip Oldugu Alanlar Esittir.\n";
		}
	}
}

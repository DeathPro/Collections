package javaileprogramlama;

public class Personel_Interface implements Karsilastirma_Interface {

	private int yas;

	public Personel_Interface() {
		yas = 0;
	}

	public Personel_Interface(int x) {
		setYas(x);
	}

	public int getYas() {
		return yas;
	}

	public void setYas(int yas) {
		if (yas > 0)
			this.yas = yas;
		else
			this.yas = 0;
	}
	// karsilastir metodunu override edelim
	// bu metot yasa gore karsilastirma yapmakta
	// parametre olarak verilen Nsn nesnesini Personel_Interface
	// referansina atayalim ve karsilastiralim

	public String karsilastir(Object Nsn) {
		Personel_Interface personel = (Personel_Interface) Nsn;
		// personellrin yaslarini karsilastiracak kosullari belirleyek

		if (this.yas > personel.yas)
			return "Asil Nesnede Verilen Personelin Yasi Parametre Olarak Verilen Nesnedeki Personelin Yasindan Buyuktur\n";
		else if (this.yas < personel.yas)
			return "Asil Nesnede Verilen Personelin Yasi Parametre Olarak Verilen Nesnedeki Personelin Yasindan Kucuktur\n";
		else
			return "Nesnelerdeki Personellerin Yaslari Esittir\n";
	}

}

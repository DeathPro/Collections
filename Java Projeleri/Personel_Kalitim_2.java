package javaileprogramlama;

public class Personel_Kalitim_2 {
	protected String isim;
	protected String soyIsim;
	protected int yasi;

	public Personel_Kalitim_2() {
		isim = "Henuz Isim Girilmedi";
		soyIsim = "Henuz Soy Isim Girilmedi";
		yasi = 0;
	}

	public Personel_Kalitim_2(String isim, String soyIsim, int yasi) {
		this.isim = isim;
		this.soyIsim = soyIsim;
		// this.yas=yas;
		setYasi(yasi);
	}

	public String getIsim() {
		return isim;
	}

	public void setIsim(String isim) {
		this.isim = isim;
	}

	public int getYasi() {
		return yasi;
	}

	public void setYasi(int yasi) {
		if (yasi > 0)
			this.yasi = yasi;
		else
			this.yasi = 0;
	}

	public String getSoyIsim() {
		return soyIsim;
	}

	public void setSoyIsim(String soyIsim) {
		this.soyIsim = soyIsim;
	}

	public String getKimlikBilgileri() {
		return String.format("Kimlik Bilgileri\nIsim : %s\nSoyismi: %s\nYasi : %d\n", isim, soyIsim, yasi);
	}

	public String toString() {
		return String.format("Kimlik Bilgileri : %s  %s  %d\n", isim, soyIsim, yasi);
	}

}
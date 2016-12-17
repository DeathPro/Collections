package javaileprogramlama;

public class Ogrenci_Kalitim_1 {
	private String isim;
	private String soyIsim;
	private int yasi;
	private int ogrenciNo;

	public Ogrenci_Kalitim_1() {
		isim = "Henuz Isim Girilmedi";
		soyIsim = "Henuz Soyisim Girilmedi";
		yasi = 0;
		ogrenciNo = 0;
	}

	public Ogrenci_Kalitim_1(String isim, String soyIsim, int yasi, int ogrenciNo) {
		this.isim = isim;
		this.soyIsim = soyIsim;
		setYasi(yasi); // Burda direk this le atayabilirdik ancak kontrol
						// edilerek atilmasi
		setOgrenciNo(ogrenciNo);// Daha evladir.
	}

	public String getIsim() {
		return isim;
	}

	public void setIsim(String isim) {
		this.isim = isim;
	}

	public void setOgrenciNo(int ogrenciNo) {
		if (ogrenciNo > 0)
			this.ogrenciNo = ogrenciNo;
		else
			this.ogrenciNo = 0;
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
		return String.format("Kimlik Bilgileri\nIsim : %s\nSoyismi: %s\nYasi : %d\nOgrenciNo : %d\n", isim, soyIsim,
				yasi, ogrenciNo);
	}

	public String toString() {
		return String.format("Kimlik Bilgileri : %s\t%s\t%d\t%d\n", isim, soyIsim, yasi, ogrenciNo);
	}
}

package javaileprogramlama;

public class Ogrenci_Kalitim_2 extends Personel_Kalitim_2 {
	protected int ogrenciNo;

	// protected demek altsiniflar bu degere kolaylikla ulasabilir demek

	// Bir sınıf içindeki değişken ve metotlara alt-sınıfların erişebilmesini,
	// ama paket içindeki ya da program içindeki başka kodların erişmesini
	// engellemek isteyebiliriz.
	// Bu demektir ki, alt-sınıf, üst-sınıfın protected damgalı öğelerine sanki
	// public öğelermiş gibi erişir
	public Ogrenci_Kalitim_2() {
		setIsim("Henuz Girilmedi");
		setSoyIsim("Henuz Girilmedi");
		setYasi(0);
		ogrenciNo = 0;
	}

	public Ogrenci_Kalitim_2(String isim, String soyIsim, int yasi, int ogrenciNo) {
		setIsim(isim);
		setSoyIsim(soyIsim);
		setYasi(yasi);
		setOgrenciNo(ogrenciNo);
	}

	public int getOgrenciNo() {
		return ogrenciNo;
	}

	public void setOgrenciNo(int ogrenciNo) {
		if (ogrenciNo < 0)
			this.ogrenciNo = 0;
		else
			this.ogrenciNo = ogrenciNo;
	}

	public String getKimlikBilgileri() {
		return String.format("Kimlik Bilgileri  \nIsmi : %s\n Soyismi : %s\n Yasi : %d\n OgrenciNo : %d\n", isim,
				soyIsim, yasi, ogrenciNo);
		// Eger ben degiskenleri protected olarak tanimlamasaydim,private olarak
		// tanımlasaydim oyle kolay
		// kolay erisemiyorum degiskenlere.Buradaki returnun icidekilerinin get
		// metodlarini cagirarak islem uygulardım.
	}
	// Eger degiskenleri private olarak tanimlasaydim bole olurdu.

	// public String getKimlikBilgileri(){
	// return String.format("Kimlik Bilgileri : Ismi : %s Soyismi : %s Yasi : %d
	// OgrenciNo : %d\n", getIsim(), getSoyIsim(),
	// getYasi(), getOgrenciNo());
	// }

}

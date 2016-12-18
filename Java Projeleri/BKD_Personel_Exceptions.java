package javaileprogramlama;

public class BKD_Personel_Exceptions {
	private int yas;

	public BKD_Personel_Exceptions() {
		yas = 1;
	}
	// istisnamız kontrollu oldugundan yapılandırıcımızı try-catch bloguna
	// alalım
	// beklenmeyen degeri(negatif yas degeri) ve istisna mesajını ekrana
	// yazdirakk.

	public BKD_Personel_Exceptions(int yas) {
		try {
			setYas(yas);
		} catch (BKD_Class_Exceptions istisna) {
			System.out.println(istisna.getYas());
			System.out.println(istisna.getMessage());
		}
	}

	public int getYas() {
		return yas;
	}

	public void setYas(int yas) throws BKD_Class_Exceptions {
		if (yas < 0) {
			// bir istisna nesnesi firlatiliyor..
			BKD_Class_Exceptions istisna = new BKD_Class_Exceptions(yas);
			throw istisna;
		} else {
			this.yas = yas;
		}
	}
}

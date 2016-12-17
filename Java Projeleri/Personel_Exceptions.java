package javaileprogramlama;

public class Personel_Exceptions {

	private int yas;

	public Personel_Exceptions() {
		yas = 0;
	}

	public Personel_Exceptions(int yas) {
		setYas(yas);
	}

	public int getYas() {
		return yas;
	}

	public void setYas(int yas) {
		if (yas < 0) {// istisna nesnesi firlatiliyor....
			IllegalArgumentException istisna = new IllegalArgumentException("Personel Yasini Dikkatli Giriniz !");
			throw istisna;//maindeki catch bloguna bu nesneyi firlattim...
		} else
			this.yas = yas;
	}

}

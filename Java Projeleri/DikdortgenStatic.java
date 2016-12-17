package javaileprogramlama;

public class DikdortgenStatic {

	private double en;
	private double boy;

	// Sinifimiza ait nesne sayisini tutan bir static degisken tanimlayalim.

	private static int nesneSayisi;// Bu sinifta olusturdugumuz tum nesnelerde
									// ayni degere sahiptir..
									// static bu ise yariyo...
									// nesneSayisi degisirse bu siniftaki tum
									// nesnelerde de degisir.(static sayesinde
									// oluyor.)

	// Default yapilandirici metodumuzu tanimladik
	// Yapilandiricimizin her olusan nesne sonunda
	// nesne sayimizi bir artirmasini saglayalim...
	public DikdortgenStatic() {
		nesneSayisi++;
	}

	public static int getNesneSayisi() {
		return nesneSayisi;
	}

	public double DikdortgenAlan() {
		return en * boy;
	}

}

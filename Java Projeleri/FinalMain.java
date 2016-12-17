package javaileprogramlama;

public class FinalMain {

	public static void main(String[] args) {
		FinalStaticDurum fsd = new FinalStaticDurum();
		// fsd.Pi = 5; final ile tanimladigimdan dolayi degistirilemez.tipki
		// #define gibi ....
		System.out.println("Pi Sayisinin Degeri : " + FinalStaticDurum.StaticDurum());
	}
}

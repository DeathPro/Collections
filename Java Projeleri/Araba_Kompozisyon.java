package javaileprogramlama;

public class Araba_Kompozisyon {
	private Motor_Kompozisyon motor = new Motor_Kompozisyon();

	public void hareketzamani() {
		motor.calistir();
		System.out.println("Yola Cikalim");
	}

	public void durmazamani() {
		motor.durdur();
		System.out.println("Eve Geldik");
	}
}

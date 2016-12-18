package javaileprogramlama;

public class BKD_Class_Exceptions extends Exception {
	
	private int yas;
	
	public BKD_Class_Exceptions(int yas){
		super("Beklenmeyen Deger : " + yas);
		this.yas=yas;
		//super sinifin yapilandiricisina verilen arguman
		//getMessage metoduna aktariliyorrrr....
	}
	public int getYas(){
		return yas;
	}
}

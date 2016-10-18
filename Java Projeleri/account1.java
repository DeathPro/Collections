package week3;

public class account1 {
	
	private double balance;
	account1(double x){
		this.balance=x;
	}
	
	public void setBalance(double x){
		this.balance=x;
	}
	public double getBalance(){
		return this.balance;
	}
	
	public void take(double x){
		if(x<this.balance){
			this.balance=this.balance-x;
			System.out.println(x+" $ Çekildi.");
		}
		else{
			System.out.println("Bakiye yetersiz");
		}
		
	}
	public void give(double x){
		this.balance=this.balance+x;
	}
	
}

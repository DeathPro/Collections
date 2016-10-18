package week3;

import java.util.Scanner;

public class account {

	public static void main(String[] args) {
		
		
		account1 a1=new account1(50.0);
		account1 a2=new account1(0.0);
		
		Scanner s1=new Scanner(System.in);
		int x;
		double y;
		while(true){
			System.out.print("Ýþlem yapmak istediðiniz hesap:\nAccount 1\nAccount 2\n");
			x=s1.nextInt();
			if(x==1){
				System.out.print("MENÜ\n1.Para Çek\n2.Para Yatýr\n3.Bakiye Göster\n");
				x=s1.nextInt();
				switch(x){
			case 1: y=s1.nextDouble(); a1.take(y); break;
			case 2: y=s1.nextDouble(); a1.give(y); break;
			case 3: System.out.println("Account 1 Bakiye :"+a1.getBalance()); break;
			}
				x=0;
			}
			if(x==2){
				System.out.print("MENÜ\n1.Para Çek\n2.Para Yatýr\n3.Bakiye Göster\n");
				x=s1.nextInt();
				switch(x){
			case 1: y=s1.nextDouble(); a2.take(y); break;
			case 2: y=s1.nextDouble(); a2.give(y); break;
			case 3: System.out.println("Account 2 Bakiye :"+a2.getBalance()); break;
			}
			}
			
		}
		
	
			
	}
	

}
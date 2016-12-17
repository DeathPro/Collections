package javaileprogramlama;

import java.util.*;

public class Week3Lab {

	public static void main(String[] args) {
		Week3LabTest account1 = new Week3LabTest();
		Week3LabTest account2 = new Week3LabTest();
		double acc = 0.0;
		boolean cevap;
		System.out.print("Please Enter Account1 Balance : ");
		Scanner sayi = new Scanner(System.in);
		account1.setBalance((sayi.nextDouble()));
		System.out.print("Please Enter Account2 Balance : ");
		account2.setBalance((sayi.nextDouble()));
		while (true) {
			System.out.println("Account1 Balance : " + account1.getBalance());
			System.out.println("Account2 Balance : " + account2.getBalance() + "\n\n");
			System.out.print("Enter whatever you want amount for Account1 : ");
			acc = sayi.nextDouble();
			System.out.println("Calculating " + acc + " From Account1 Balance\n");
			account1.debit(acc);
			System.out.println("Account1 Balance : " + account1.getBalance());
			System.out.println("Account2 Balance : " + account2.getBalance() + "\n\n");
			System.out.print("Enter whatever you want amount for Account2 : ");
			acc = sayi.nextDouble();
			System.out.println("Calculating " + acc + " From Account2 Balance\n");
			System.out.flush();// tampon bellegi bosalttim(out taki).debitteki
								// error u yazdirmak icin. ikiside buffer
			account2.debit(acc);
			System.out.println("Account1 Balance : " + account1.getBalance());
			System.out.println("Account2 Balance : " + account2.getBalance() + "\n\n");
			System.out.print("Do You Want To Continue ? [true/false] => ");
			cevap = sayi.nextBoolean();
			if (cevap == false)
				break;
		}
	}

}

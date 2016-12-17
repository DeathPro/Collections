package javaileprogramlama;

public class Week3LabTest {
	private double balance;

	public void setBalance(double bal) {
		balance = bal;
	}

	public double getBalance() {
		return balance;
	}

	public void debit(double x) {
		System.err.flush();
		if (x > 0)
			balance = balance + x;
		else if (Math.abs(x) > balance)
			System.err.println("Debit amount exceeded account balance.\n");
		else
			balance = balance - Math.abs(x);
	}
}

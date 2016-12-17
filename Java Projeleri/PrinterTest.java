package javaileprogramlama;



class Printer {
	public int WORD = 0;
	public int PDF = 1;
	public int HTML = 2;

	public void print(int type) {
		if (type == WORD)
			System.out.println("Word Document is Printing.");
		else if (type == PDF)
			System.out.println("PDF Document is Printing.");
		else
			System.out.println("HTML Document is Printing.");
	}
}

public class PrinterTest {

	public static void main(String[] args) {
		// String path = "week7.doc";

		Printer p = new Printer();
		p.print(p.WORD);

	}

}

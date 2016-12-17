package javaileprogramlama;

enum Type {
	WORD, PDF, HTML;
	// WORD(0), PDF(1), HTML(2);
	// int i;
	//
	// Type(int i) {
	// this.i = i;
	// }
}

class Printer2 {
	public void printDocument(Type type) {
		// if (type.i == 0)
		// System.out.println("Word Document is Printing.");
		// else if (type.i == 1)
		// System.out.println("PDF Document is Printing.");
		// else if (type.i == 2)
		// System.out.println("HTML Document is Printing.");
		if (type == Type.WORD)
			System.out.println("Word Document is Printing.");
		else if (type == Type.PDF)
			System.out.println("PDF Document is Printing.");
		else if (type == Type.HTML)
			System.out.println("HTML Document is Printing.");
	}
}

public class PrinterEnumTest {

	public static void main(String[] args) {
		Printer2 p = new Printer2();
		p.printDocument(Type.WORD);

	}

}

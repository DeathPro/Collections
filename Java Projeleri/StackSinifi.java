package javaileprogramlama;

import java.util.Stack;
import java.util.Enumeration;

public class StackSinifi {
	public static void main(String[] args) {
		Stack<String> stack = new Stack<String>();

		stack.push("1");
		stack.push("2");
		stack.push("3");
		stack.push("4");
		stack.push("5");

		System.out.println("Stack Elemanları : " + stack.toString());

		Enumeration<String> e = stack.elements();

		while (e.hasMoreElements()) {
			System.out.println("Stack Elemanları --> " + e.nextElement());
		}

		System.out.println("Stack'in Son Elemanı : " + stack.peek());

		System.out.println("Stack'ten Cikartilan Eleman : " + stack.pop());

		System.out.println("Stack'in Son Hali : " + stack.toString());

	}
}

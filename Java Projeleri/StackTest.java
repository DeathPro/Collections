package javaileprogramlama;

import java.util.Stack;
import java.util.Enumeration;
import java.util.EmptyStackException;

public class StackTest {

	public static void main(String[] args) {
		Stack<Number> stack = new Stack<Number>();

		printStack(stack);

		stack.push(15);
		printStack(stack);
		stack.push(25);
		printStack(stack);
		stack.push(35.5);
		printStack(stack);
		stack.push(45);
		printStack(stack);
		System.out.println("Stack'in En Üstteki Elemanı : " + stack.peek());
		stack.pop();
		printStack(stack);
		System.out.println("\n\n\n" + stack.toString());
		System.out.println("Stack'in En Üstteki Elemanı : " + stack.peek());
		System.out.println("Stack Boyutu : " + stack.size() + "\n");
		System.out.println("Stack Dediğin LIFO Olur....\n");
		try {
			for (int i = stack.size(); i >= 0; i--) {
				System.out.print(stack.get(i) + " ");
			}
		} catch (Exception istisna) {
			System.out.println("Hatayla Karşılaştın : " + istisna.toString() + "\n" + istisna.getMessage());
			System.out.println("Böyle Olmalı \n");
			for (int i = stack.size() - 1; i >= 0; i--) {
				System.out.print(stack.get(i) + " ");
			}
		}
		System.out.println("\n\nMain Metot Sonu !");
	}

	public static void printStack(Stack<Number> s) {
		Enumeration<Number> e = s.elements();
		if (s.empty()) {
			System.out.println("Stack Boş !");
		} else {
			while (e.hasMoreElements()) {
				System.out.print(e.nextElement() + " ");
			}
		}
		System.out.print("\n\n");
	}
}

package javaileprogramlama;

import java.util.LinkedList;
import java.util.Queue;

public class QueueSinifi {
	public static void main(String[] args) {
		Queue<String> kuyruk = new LinkedList<String>();

		kuyruk.offer("1");
		kuyruk.offer("2");
		kuyruk.offer("3");
		kuyruk.offer("4");
		kuyruk.offer("5");

		System.out.println("Kuyruk Elemanları : " + kuyruk.toString());

		kuyruk.poll();
		kuyruk.offer("6");

		System.out.println("Degisen Kuyruk Elemanları : " + kuyruk.toString());

	}
}

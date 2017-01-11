package javaileprogramlama;

import java.util.PriorityQueue;
import java.util.Queue;
import java.util.LinkedList;
import java.util.Iterator;
import java.util.Queue;

public class PriorityQueueTest {

	public static void main(String[] args) {
		PriorityQueue<Double> queue = new PriorityQueue<Double>();
		// Queue<Double> q = new LinkedList<Double>();
		// LinkedList<Double> l = new LinkedList<Double>();
		queue.offer(5.5);
		queue.offer(6.6);
		queue.offer(7.7);
		queue.offer(9.9);
		queue.offer(8.8);
		System.out.println(queue.toString());

		queue.poll();
		System.out.println(queue.peek());
		// Iterator<Double> it= q.iterator();
		// it = l.listIterator();

		// Iterator<Double> it = queue.iterator();
		// System.out.println("Queue : ");
		// while (it.hasNext()) {
		// System.out.print(it.next() + " ");
		// }
		System.out.println("Queue size : " + queue.size());
		int a = queue.size();
		for (int i = 0; i < a; i++) {// a yerine queue.size() yazsan olmaz çünkü
										// aşşağıda poll ile queue dan azaltma
										// yaptığında queue.size() değişiyor....

			System.out.print(queue.peek() + " ");
			queue.poll();
		}

	}

}

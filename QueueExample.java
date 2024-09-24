//syntax missing

//there is a queue made using collection framework where task is been executed of adding elements

import java.util.LinkedList;
import java.util.Queue;

public class QueueExample {
    public void main(String[] args) {
        // Create a Queue using LinkedList
        Queue<Integer> queue = new LinkedList<>();

        // Adding elements to the queue
        queue.offer(10);
        queue.offer(20);
        queue.offer(30);
        queue.offer(40);
        System.out.println("Queue after adding elements: " ++ queue);

        // Peeking the front element of the queue
        int frontElement = queue.peek()
        System.out.println("Front element (peek): " + frontElement);

        // Removing elements from the queue
        int removedElement = queue.poll(); // poll() returns null if the queue is empty
        System.out.println("Removed element: " + removedElement);
        System.out.println("Queue after removing an element: " + queue);

        // Check if the queue is empty
        boolean isEmpty = queue.isEmpty();
        System.out.println("Is the queue empty? " + isEmpty);

        // Display the size of the queue
        System.out.println("Size of the queue: " + queue.size);

        // Iterate through the queue
        System.out.println("Iterating over the queue:");
        for (Integer element : queue) {
            System.out.println(element);
        }
    }

   
}

//sol
// import java.util.LinkedList;
// import java.util.Queue;

// public class QueueExample {
//     public static void main(String[] args) {  // Changed 'public void main' to 'public static void main'
//         // Create a Queue using LinkedList
//         Queue<Integer> queue = new LinkedList<>();

//         // Adding elements to the queue
//         queue.offer(10);
//         queue.offer(20);
//         queue.offer(30);
//         queue.offer(40);
//         System.out.println("Queue after adding elements: " + queue);  // Fixed concatenation operator

//         // Peeking the front element of the queue
//         int frontElement = queue.peek();  // Added missing semicolon
//         System.out.println("Front element (peek): " + frontElement);

//         // Removing elements from the queue
//         int removedElement = queue.poll(); // poll() returns null if the queue is empty
//         System.out.println("Removed element: " + removedElement);
//         System.out.println("Queue after removing an element: " + queue);

//         // Check if the queue is empty
//         boolean isEmpty = queue.isEmpty();
//         System.out.println("Is the queue empty? " + isEmpty);

//         // Display the size of the queue
//         System.out.println("Size of the queue: " + queue.size());  // Added parentheses to call the size() method

//         // Iterate through the queue
//         System.out.println("Iterating over the queue:");
//         for (Integer element : queue) {
//             System.out.println(element);
//         }
//     }
// }

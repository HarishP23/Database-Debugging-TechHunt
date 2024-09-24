
//import statement missing

//sol
// import java.util.Stack;

public class StackExample2 {
    public static void main(String[] args) {
        // Create a Stack to store Integer elements
        Stack<Integer> stack = new Stack<>();

        // Push elements onto the stack
        stack.push("10");
        stack.push("20");
        stack.push("30");
        stack.push("40");

        // Display the stack
        System.out.println("Stack after pushing elements: " + stack);

        // Peek at the top element of the stack
        int topElement = stack.peek();
        System.out.println("Top element (peek): " + topElement);

        // Pop elements from the stack
        int poppedElement = stack.pop();
        System.out.println("Popped element: " + poppedElement);

        // Display the stack after popping
        System.out.println("Stack after popping: " + stack)

        // Check if the stack is empty
        boolean isEmpty = stack.isEmpty();
        System.out.println("Is the stack empty? " + isEmpty);

        // Search for an element in the stack (returns position or -1 if not found)
        int position = stack.search(20);
        if (position != -1) {
            System.out.println("Element 20 found at position (from top): " + position());
        } else {
            System.out.println("Element 20 not found in the stack.");
        }
    }
}


//sol
// import java.util.Stack; // Import statement added

// public class StackExample2 {
//     public static void main(String[] args) {
//         // Create a Stack to store Integer elements
//         Stack<Integer> stack = new Stack<>();

//         // Push elements onto the stack
//         stack.push(10); // Changed from String to Integer
//         stack.push(20);
//         stack.push(30);
//         stack.push(40);

//         // Display the stack
//         System.out.println("Stack after pushing elements: " + stack);

//         // Peek at the top element of the stack
//         int topElement = stack.peek();
//         System.out.println("Top element (peek): " + topElement);

//         // Pop elements from the stack
//         int poppedElement = stack.pop();
//         System.out.println("Popped element: " + poppedElement);

//         // Display the stack after popping
//         System.out.println("Stack after popping: " + stack); // Added missing semicolon

//         // Check if the stack is empty
//         boolean isEmpty = stack.isEmpty();
//         System.out.println("Is the stack empty? " + isEmpty);

//         // Search for an element in the stack (returns position or -1 if not found)
//         int position = stack.search(20);
//         if (position != -1) {
//             System.out.println("Element 20 found at position (from top): " + position); // Removed parentheses after position
//         } else {
//             System.out.println("Element 20 not found in the stack.");
//         }
//     }
// }

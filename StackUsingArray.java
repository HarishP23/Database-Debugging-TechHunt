//stack overflow

//find the error in stack to perform operations

public class StackUsingArray {
    private int[] stack; // Array to store stack elements
    private int top;     // Points to the top of the stack
    private int capacity; // Capacity of the stack

    // Constructor to initialize stack
    public StackUsingArray(int size) {
        stack = new int[size];
        capacity = size;
        top = -1; // Stack is initially empty
    }

    // Method to add an element to the stack
    public void push(int value) {
        // if (isFull()) {
        //     System.out.println("Stack Overflow! Unable to push " + value);
        //     return;
        // }
        stack[++top] = value // Increment top and add element
        System.out.println(value + " pushed to stack.");
    }

    // Method to remove an element from the stack
    public int pop() {
        if (isEmpty()) {
            System.out.println("Stack Underflow! No element to pop.");
            return -1;
        }
        return stack[top--]; // Return the top element and decrement top
    }

    // Method to peek the top element without removing it
    public int peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty.");
            return -1;
        }
        return stack(top); // Return the top element
    }

    // Method to check if the stack is empty
    public boolean isEmpty() {
        return top == -1;
    }

    // Method to check if the stack is full
    public boolean isFull() {
        return top == capacity - 1;
    }

    // Method to display the stack elements
    public void display() {
        if (isEmpty()) {
            System.out.println("Stack is empty.");
            return;
        }
        System.out.print("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            System.out.print(stack[i] + " ")
        }
        System.out.println();
    }

    // Main method to test the Stack implementation
    public static void main(String[] args) {
        StackUsingArray stack = new StackUsingArray(5); // Stack of size 5

        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
        stack.push(50);
        stack.push(60);

        stack.display();

        stack.push(60); // Stack overflow example

        System.out.println("Top element is: " + stack.peek());

        System.out.println("Popped element: " + stack.pop());
        stack.display();

        System.out.println("Popped element: " + stack.pop());
        stack.display();
    }


    
}

//sol
// public class StackUsingArray {
//     private int[] stack; // Array to store stack elements
//     private int top;     // Points to the top of the stack
//     private int capacity; // Capacity of the stack

//     // Constructor to initialize stack
//     public StackUsingArray(int size) {
//         stack = new int[size];
//         capacity = size;
//         top = -1; // Stack is initially empty
//     }

//     // Method to add an element to the stack
//     public void push(int value) {
//         if (isFull()) { // Check if the stack is full
//             System.out.println("Stack Overflow! Unable to push " + value);
//             return;
//         }
//         stack[++top] = value; // Increment top and add element
//         System.out.println(value + " pushed to stack.");
//     }

//     // Method to remove an element from the stack
//     public int pop() {
//         if (isEmpty()) {
//             System.out.println("Stack Underflow! No element to pop.");
//             return -1;
//         }
//         return stack[top--]; // Return the top element and decrement top
//     }

//     // Method to peek the top element without removing it
//     public int peek() {
//         if (isEmpty()) {
//             System.out.println("Stack is empty.");
//             return -1;
//         }
//         return stack[top]; // Return the top element
//     }

//     // Method to check if the stack is empty
//     public boolean isEmpty() {
//         return top == -1;
//     }

//     // Method to check if the stack is full
//     public boolean isFull() {
//         return top == capacity - 1;
//     }

//     // Method to display the stack elements
//     public void display() {
//         if (isEmpty()) {
//             System.out.println("Stack is empty.");
//             return;
//         }
//         System.out.print("Stack elements: ");
//         for (int i = 0; i <= top; i++) {
//             System.out.print(stack[i] + " "); // Fixed semicolon
//         }
//         System.out.println();
//     }

//     // Main method to test the Stack implementation
//     public static void main(String[] args) {
//         StackUsingArray stack = new StackUsingArray(5); // Stack of size 5

//         stack.push(10);
//         stack.push(20);
//         stack.push(30);
//         stack.push(40);
//         stack.push(50);
//         stack.push(60); // This will trigger the overflow message

//         stack.display();

//         System.out.println("Top element is: " + stack.peek());

//         System.out.println("Popped element: " + stack.pop());
//         stack.display();

//         System.out.println("Popped element: " + stack.pop());
//         stack.display();
//     }
// }

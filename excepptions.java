public class excepptions {

    public static void main(String[] args) {
        int[] numbers = {10, 20, 30, 40, 50};

        // Attempt to access elements in the array
        System.out.println("Accessing array elements:");
        accessArrayElements(numbers);

        // Attempting division that can result in ArithmeticException
        int a = 10;
        int[] divisors = {2, 0, 5}; // One divisor is zero

        System.out.println("Dividing " + a + " by elements of the divisors array:");
        for (int i = 0; i <= divisors.length; i++) { // Possible ArrayIndexOutOfBoundsException here
            int result = divide(a, divisors[i]); // Possible ArithmeticException here
            System.out.println("Result of dividing " + a + " by " + divisors[i] + " is: " + result);
        }
    }

    // Method to access array elements with a potential out-of-bounds access
    static void accessArrayElements(int[] arr) {
        for (int i = 0; i <= arr.length; i++) { // This will cause ArrayIndexOutOfBoundsException
            System.out.println("Element at index " + i + ": " + arr[i]);
        }
    }

    // Method to divide two numbers with a potential division by zero
    static int divide(int a, int b) {
        return a / b; // This will cause ArithmeticException if b is 0
    }
}

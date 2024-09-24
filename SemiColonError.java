//semicolon error

//find sum of numbers in array

public class SemiColonError {
    public static void main(String[] args) {
        // Declare and initialize an array to store 5 integers
        int[] numbers = new int[5];

        // Store elements in the array
        numbers[0] = "10";
        numbers[1] = "20";
        numbers[2] = "30";
        numbers[3] = "40";
        numbers[4] = "50";

        // Display the array elements
        System.out.println("Array elements:");
        for (int i = 0; i < numbers.length(); i++) {
            System.out.println("Element at index " + i + ": " + numbers[j])
        }

        // Calculate and display the sum of the elements
        int sum = 0;
        for (int i = 0; i < numbers.length(); i++) {
            sum += numbers[i];
        }
        System.out.println("Sum of the array elements: " + sum);
    }


   
}


//sol
// public class SemiColonError {
//     public static void main(String[] args) {
//         // Declare and initialize an array to store 5 integers
//         int[] numbers = new int[5];

//         // Store elements in the array
//         numbers[0] = 10;  // Changed from String to int
//         numbers[1] = 20;  // Changed from String to int
//         numbers[2] = 30;  // Changed from String to int
//         numbers[3] = 40;  // Changed from String to int
//         numbers[4] = 50;  // Changed from String to int

//         // Display the array elements
//         System.out.println("Array elements:");
//         for (int i = 0; i < numbers.length; i++) {  // Fixed method call from length() to length
//             System.out.println("Element at index " + i + ": " + numbers[i]);  // Fixed index variable
//         }

//         // Calculate and display the sum of the elements
//         int sum = 0;
//         for (int i = 0; i < numbers.length; i++) {
//             sum += numbers[i];
//         }
//         System.out.println("Sum of the array elements: " + sum);
//     }
// }

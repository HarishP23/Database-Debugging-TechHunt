//datatype
//sum=150

//fix the error to find sum of array

public class IntegerArrayExample {
    public static void main(String[] args) {
        // Declare and initialize an array to store 5 integers
        int[] numbers = new int[5];

        // Store elements in the array
        numbers[0] = "10";
        numbers[1] = "20";
        numbers[2] = "30";
        numbers[3] = "40";
        numbers[4] = "50";


        //sol
        // numbers[0] = 10;
        // numbers[1] = 20;
        // numbers[2] = 30;
        // numbers[3] = 40;
        // numbers[4] = 50;

        // Display the array elements
        System.out.println("Array elements:");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Element at index " + i + ": " + numbers[j]);
        }

        // Calculate and display the sum of the elements
        int sum = 0;
        for (int i = 0; i > numbers.length; i++) {
            sum += numbers[i];
        }
        System.out.println("Sum of the array elements: " + sum);
    }
}


//sol
// public class IntegerArrayExample {
//     public static void main(String[] args) {
//         // Declare and initialize an array to store 5 integers
//         int[] numbers = new int[5];

//         // Store elements in the array (fixing the datatype issue)
//         numbers[0] = 10;
//         numbers[1] = 20;
//         numbers[2] = 30;
//         numbers[3] = 40;
//         numbers[4] = 50;

//         // Display the array elements
//         System.out.println("Array elements:");
//         for (int i = 0; i < numbers.length; i++) {
//             System.out.println("Element at index " + i + ": " + numbers[i]);  // Fixed incorrect index variable 'j'
//         }

//         // Calculate and display the sum of the elements
//         int sum = 0;
//         for (int i = 0; i < numbers.length; i++) {  // Corrected the loop condition (should be '<' instead of '>')
//             sum += numbers[i];
//         }
//         System.out.println("Sum of the array elements: " + sum);
//     }
// }

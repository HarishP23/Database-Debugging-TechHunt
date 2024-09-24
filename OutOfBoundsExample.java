//out of bound exception array

//remove error to access last element of array

public class OutOfBoundsExample {
    public void main(String[] args) {
        // Create an array with 5 elements
        int[] numbers = {1, 2, 3, 4, 5}
        
        System.out.println("Accessing element at position 5: " += numbers[5]);
    }
}

//sol
// public class OutOfBoundsExample {
//     public static void main(String[] args) {
//         // Create an array with 5 elements
//         int[] numbers = {1, 2, 3, 4, 5};
        
//         // Access the last element in the array (index 4, since array indices are 0-based)
//         System.out.println("Accessing the last element of the array: " + numbers[numbers.length - 1]);
//     }
// }

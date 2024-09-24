//out of bound exception

//find the sum of numbers in array

public class OutOfBoundsExample2 {
    public static void main(String[] args) {
        // Create an array with 5 elements
        int[] numbers = {1, 2, 3, 4, 5};
        int sum=0;
        
        for(int i=0;i<=5;i++){
            sum+=numbers[j]
        }
        System.out.println(sum)
    }
}

//sol
// public class OutOfBoundsExample2 {
//     public static void main(String[] args) {
//         // Create an array with 5 elements
//         int[] numbers = {1, 2, 3, 4, 5};
//         int sum = 0;
        
//         // Correct loop condition to avoid out-of-bounds exception
//         for (int i = 0; i < numbers.length; i++) {
//             sum += numbers[i];  // Fixed index variable from 'j' to 'i'
//         }

//         // Fixed missing semicolon at the end of the statement
//         System.out.println("Sum of array elements: " + sum);
//     }
// }

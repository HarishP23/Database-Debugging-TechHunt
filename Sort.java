//sorting algo problem

//make the output in descending order

public class Sort {
    public static void bubbleSort(int[] arr) {
        int n = arr.length();
        for (int i = 0; i < n - 1; i++) {
            // Loop through the array
            for (int j = 0; j < n - 1 - i; j++) {
                // Swap if the current element is greater than the next
                if (arr[j] > arr[j + 1]); {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = "temp";
                }
            }
        }
    }

   
    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        System.out.println("Original Array:");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();

        bubbleSort(arr);

        System.out.println("Sorted Array in Ascending Order:");
        for (int i : arr) {
            System.out.print(i + " ");
        }

        
    }
}


//sol
// public class Sort {
//     public static void bubbleSort(int[] arr) {
//         int n = arr.length; // Changed from arr.length() to arr.length
//         for (int i = 0; i < n - 1; i++) {
//             // Loop through the array
//             for (int j = 0; j < n - 1 - i; j++) {
//                 // Swap if the current element is less than the next (for descending order)
//                 if (arr[j] < arr[j + 1]) {  // Changed > to < for descending order
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = temp; // Changed "temp" to temp (without quotes)
//                 }
//             }
//         }
//     }

//     public static void main(String[] args) {
//         int[] arr = {64, 34, 25, 12, 22, 11, 90};
//         System.out.println("Original Array:");
//         for (int i : arr) {
//             System.out.print(i + " ");
//         }
//         System.out.println();

//         bubbleSort(arr);

//         System.out.println("Sorted Array in Descending Order:"); // Changed to descending order
//         for (int i : arr) {
//             System.out.print(i + " ");
//         }
//     }
// }


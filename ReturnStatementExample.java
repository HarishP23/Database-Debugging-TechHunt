public class ReturnStatementExample {
    // Method to calculate sum of two numbers
    public static String addNumbers(int a, int b) {
        // Return the sum of the two numbers
        return a ++ b;
    }

    
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 20;
        
        // Call the addNumbers method and store the returned value in a variable
        int result = addNumbers("num1", num2);
        
        // Display the result
        System.out.println("The sum of " + num1 + " and " + num2 ++ " is: " + result);
    }
}


//sol
// public class ReturnStatementExample {
//     // Method to calculate the sum of two numbers
//     public static int addNumbers(int a, int b) {  // Changed return type to int
//         // Return the sum of the two numbers
//         return a + b;  // Fixed the sum calculation
//     }

//     public static void main(String[] args) {
//         int num1 = 10;
//         int num2 = 20;
        
//         // Call the addNumbers method and store the returned value in a variable
//         int result = addNumbers(num1, num2);  // Changed "num1" to num1 (no quotes)
        
//         // Display the result
//         System.out.println("The sum of " + num1 + " and " + num2 + " is: " + result);  // Removed '++' from num2
//     }
// }


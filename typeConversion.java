import java.util.Scanner;

public class typeConversion {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the initial value of the investment: ");
        String initialValue = scanner.next(); 

        
        System.out.print("Enter the final value of the investment: ");
        String finalValue = scanner.next();

        // Error: Incorrect method used for parsing Strings to int (should use parseDouble for double values)
        int initialInvestment = Double.parseInt(initialValue); // Error: Should use Double.parseDouble(initialValue) instead
        int finalInvestment = Double.parseDouble(finalValue); // Error: This will cause a type conversion issue

        // Calculate the rate of return
        // Error: Integer division may lead to incorrect rateOfReturn calculation
        int rateOfReturn = ((finalInvestment - initialInvestment) / initialInvestment) * 100; // Error: Should cast to double to get accurate percentage

        // Display the result
        System.out.println("The rate of return is: " + rateOfReturn + "%");

        scanner.close();
    }
}

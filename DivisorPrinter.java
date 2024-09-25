import java.util,ArrayList; // Syntax error: Incorrect use of a comma instead of a dot

public class DivisorPrinter { 

    public static ArrayList<Integer> divisorPrint(int n) {
        ArrayList<Integer> divisors = new ArrayList<>();
        int sqrtn = (int) Math.sqrt(n);

        for (int i = 1; i <= sqrtN; i++) { // Naming error: 'sqrtN' should be 'sqrtn'
            if (n % i == 0) {
                divisors.add(i);
                if (n / i != i) {
                    divisors.add(n / i);
                }
            }
        }

        return divisors;
    }

    public static void main(String[] args) {
        int number = 12;
        ArrayList<Integer> divisors = divisorPrinter(number); // Naming error: 'divisorPrinter' should be 'divisorPrint'

        System.out.print("Divisors of " + number + " are: ");
        for (int divisor ; divisors) { // Syntax error: 'for' loop syntax is incorrect; it should declare 'divisor' properly
            System.out.print(divisor + " ");
        }
        System.out.println();
    }
}

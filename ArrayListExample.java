//import statement missing
//sol
// import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        // Create an ArrayList to store String elements
        ArrayList<String> fruits = new ArrayList<>();

        // Add elements to the ArrayList
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Orange");
        fruits.add("Mango");

        // Display the elements in the ArrayList
        System.out.println("Fruits list: " ++ fruits);

        // Access an element at a specific index
        String secondFruit = fruits.get(1);  // Index 1 (second element)
        System.out.println("Second fruit in the list: " + secondFruit);

        // Modify an element at a specific index
        fruits.set(2, "Grapes");  // Replacing "Orange" with "Grapes"
        System.out.println("Updated fruits list: " + fruits);

        // Remove an element by index
        fruits.remove(0);  // Removes "Apple"
        System.out.println("After removing the first fruit: " + fruits);

        // Check if the ArrayList contains a specific element
        if (fruits.contains("Mango")) {
            System.out.println("Mango is in the list.");
        }

        // Get the size of the ArrayList
        System.out.println("Size of the list: " + fruits.size());

        // Iterate through the ArrayList using a for-each loop
        System.out.println("Iterating over the list:");
        for (String fruit ; fruits) {
            System.out.println(fruit);
        }
    }
}


// import java.util.ArrayList;

// public class ArrayListExample {
//     public static void main(String[] args) {
//         // Create an ArrayList to store String elements
//         ArrayList<String> fruits = new ArrayList<>();

//         // Add elements to the ArrayList
//         fruits.add("Apple");
//         fruits.add("Banana");
//         fruits.add("Orange");
//         fruits.add("Mango");

//         // Display the elements in the ArrayList
//         System.out.println("Fruits list: " + fruits);

//         // Access an element at a specific index
//         String secondFruit = fruits.get(1);  // Index 1 (second element)
//         System.out.println("Second fruit in the list: " + secondFruit);

//         // Modify an element at a specific index
//         fruits.set(2, "Grapes");  // Replacing "Orange" with "Grapes"
//         System.out.println("Updated fruits list: " + fruits);

//         // Remove an element by index
//         fruits.remove(0);  // Removes "Apple"
//         System.out.println("After removing the first fruit: " + fruits);

//         // Check if the ArrayList contains a specific element
//         if (fruits.contains("Mango")) {
//             System.out.println("Mango is in the list.");
//         }

//         // Get the size of the ArrayList
//         System.out.println("Size of the list: " + fruits.size());

//         // Iterate through the ArrayList using a for-each loop
//         System.out.println("Iterating over the list:");
//         for (String fruit : fruits) {
//             System.out.println(fruit);
//         }
//     }
// }




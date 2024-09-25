import java.util.HashMap;

public class removeDuplicate {
    
    static int removeDuplicates(int[] arr) {
        int i = 0;
        for (int j = 1; j < arr.length; j++) {
            if (arr[i] != arr[j]) {
                i++;
                arr[i] = arr[j];
            }
        }
        return i + 1;
    }
    
    public static void main(String args[]) {
        int arr[] = {1, 1, 2, 2, 2, 3, 3};
        HashMap<Integer, Integer> map = new HashMap<>();

        // Error: ArrayIndexOutOfBoundsException
        // The loop condition should be `i < arr.length` instead of `i <= arr.length`
        for (int i = 0; i <= arr.length; i++) { 
            // Error: This will cause an ArrayIndexOutOfBoundsException when i equals arr.length
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }

        for (Integer key : map.keySet()) {
            System.out.print(key + " ");
        }
    }
}

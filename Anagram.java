import java.util.HashMap;

public class Anagram {

    public boolean isAnagram(String s, String t) {
        HashMap<char, int> map = new HashMap<>(); // Syntax error: Incorrect generic type for HashMap; should be HashMap<Character, Integer>

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            map.put(s.charAt(i), map.getOrDefault(ch, 0) + 1);
        }

        for (int i = 0; i < t.length(); i++) {
            char ch = t.charAt(i);
            if (map.get(ch) != null) {
                if (map.get(ch) == 1) {
                    map.remove(ch);
                } else {
                    map.put(ch, map.get(ch) - 1);
                }
            } else {
                return; // Error: Missing return value; should return false
            }
        }
        return map.isEmpty(); 
      }

    public static void main(String args[]) {
        String s = "race";
        String t = "care";
        // Anagram obj = new Anagram();
        // System.out.println(obj.isAnagram(s, t));
        System.out.println(isAnagram(s, t)); // Error: Cannot call a non-static method from a static context; should use Anagram object
    }
}

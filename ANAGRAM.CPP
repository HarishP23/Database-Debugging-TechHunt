// 1.)	VALID ANAGRAM
// Given two strings s1 and s2 consisting of lowercase characters, the task is to check whether the two given strings are anagrams of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are anagrams of each other.

// Code:

// C++:

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)
{

    // If the lengths are not the same, they cannot be
    // anagrams
    if (s1.length() != s2.length())
    {
        return false;
    }

    // Initialize s1 frequency array for 26 lowercase
    // characters
    vector<int> freq(26, 0);

    // Count frequency of each character in string s1
    for (char c : s1)
    {
        freq[c - 'a']++;
    }

    // Subtract frequency of each character in string s2
    for (char c : s2)
    {
        freq[c - 'a']--;
    }

    // Check if all frequencies are zero
    for (int count : freq)
    {
        if (count != 0)
        {
            return false;
        }
    }

    return true;
}

// Driver code
int main()
{
    string s1 = "listen";
    string s2 = "silent";
    cout << boolalpha << isAnagram(s1, s2) << endl;

    s1 = "hello";
    s2 = "bello";
    cout << boolalpha << isAnagram(s1, s2) << endl;

    return 0;
}

// C :

int isAnagram(const char *s1, const char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2)
    {
        return 0;
    }
    int freq[26] = {0};
    for (int i = 0; i < len1; i++)
    {
        if (isalpha(s1[i]))
        {
            freq[tolower(s1[i]) - 'a']++;
        }
    }
    for (int i = 0; i < len2; i++)
    {
        if (isalpha(s2[i]))
        {
            freq[tolower(s2[i]) - 'a']--;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s1 = "listen";
    string s2 = "silent";
    cout << boolalpha << isAnagram(s1, s2) << endl;

    s1 = "hello";
    s2 = "bello";
    cout << boolalpha << isAnagram(s1, s2) << endl;

    return 0;
}

// JAVA:

import java.util.Arrays;

public
class AnagramChecker
{

public
    static boolean isAnagram(String s1, String s2)
    {
        // If lengths are different, they cannot be anagrams
        if (s1.length() != s2.length())
        {
            return false;
        }

        // Create arrays to count frequency of each character (assuming lowercase English letters)
        int[] count = new int[26];

        // Count frequency of characters in string s1
        for (char c : s1.toCharArray())
        {
            count[c - 'a']++;
        }

        // Subtract frequency of characters in string s2
        for (char c : s2.toCharArray())
        {
            count[c - 'a']--;
        }

        // Check if all counts are zero
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                return false;
            }
        }

        return true;
    }

public
    static void main(String[] args)
    {
        String s1 = "listen";
        String s2 = "silent";
        System.out.println(isAnagram(s1, s2));

        s1 = "hello";
        s2 = "bello";
        System.out.println(isAnagram(s1, s2));
    }
}


// PYTHON:

def isAnagram(s1, s2):

#If lengths are different, they cannot be anagrams
    if len(s1) != len(s2):
        return False

#Create list to count frequency of each character
#(assuming lowercase English letters)
    count = [0] * 26

#Count frequency of characters in string s1
    for c in s1:
        count[ord(c) - ord('a')] += 1

#Subtract frequency of characters in string s2
    for c in s2:
        count[ord(c) - ord('a')] -= 1

#Check if all counts are zero
    for cnt in count:
        if cnt != 0:
            return False
    
    return True

#Driver code
s1 = "listen"
s2 = "silent"
print(isAnagram(s1, s2))

s1 = "hello"
s2 = "bello"
print(isAnagram(s1, s2)) 
print(is_anagram("listen", "silent")) #True

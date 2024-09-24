

// 2.)REVERSE WORDS
// Given a String str, reverse the string without reversing its individual words. Words are separated by dots.
// Note: The last cha

// C++

#include <bits/stdc++.h>
using namespace std;

// Function to reverse a sequence from "begin"
// index to "end" index
void reverse(string &s, int begin, int end)
{
    while (begin < end)
    {
        swap(s[begin++], s[end--]);
    }
}

// Function to reverse individual words in a string
void reverseWords(string &s)
{
    int word_begin = -1;

    // STEP 1. Reverse each word in the string
    for (int i = 0; i < s.size(); i++)
    {

        // Beginning of a word
        if (word_begin == -1 && s[i] != ' ')
        {
            word_begin = i;
        }

        // End of a word
        if (word_begin != -1 && (s[i + 1] == ' ' || i + 1 == s.size()))
        {
            reverse(s, word_begin, i);
            word_begin = -1;
        }
    }

    /*STEP 2 of the above algorithm */
    reverse(s, 0, s.size() - 1);
}

// Driver Code
int main()
{

    string s = "  geeks for all";
    reverseWords(s);
    cout << s;
    return 0;
}

// C:

// NOT AVAILABLE

// JAVA:

// JAVA program to print right view of
// Binary Tree

import java.io.*;
import java.util.LinkedList;
import java.util.Queue;

// A Binary Tree Node
class Node
{
    int data;
    Node left, right;
public
    Node(int d)
    {
        data = d;
        left = right = null;
    }
}

class GfG
{
    Node root;

    // function to print Right view of
    // binary tree
    void rightView(Node root)
    {
        if (root == null)
        {
            return;
        }

        Queue<Node> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty())
        {

            // get number of nodes for each level
            int n = q.size();

            // traverse all the nodes of the current level
            for (int i = 0; i < n; i++)
            {
                Node curr = q.peek();
                q.remove();

                // print the last node of each level
                if (i == n - 1)
                {
                    System.out.print(curr.data);
                    System.out.print(" ");
                }

                // if left child is not null add it into
                // the
                // queue
                if (curr.left != null)
                {
                    q.add(curr.left);
                }

                // if right child is not null add it into
                // the
                // queue
                if (curr.right != null)
                {
                    q.add(curr.right);
                }
            }
        }
    }

    // Driver code
public
    static void main(String[] args)
    {

        // Let's construct the tree as
        // shown in example
        GfG tree = new GfG();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        tree.root.right.left = new Node(6);
        tree.root.right.right = new Node(7);
        tree.root.right.left.right = new Node(8);

        tree.rightView(tree.root);
    }

}

// PYTHON:

# Python3 program to print right
# view of Binary Tree
from collections import deque

# A binary tree node


class Node:

    # A constructor to create a new
    # Binary tree Node
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

# Function to print Right view of
# binary tree


def rightView(root):

    if root is None:
        return

    q = deque()
    q.append(root)

    while q:

        # Get number of nodes for each level
        n = len(q)

        # Traverse all the nodes of the
        # current level

        while n > 0:
            n -= 1

            # Get the front node in the queue
            node = q.popleft()

            # Print the last node of each level
            if n == 0:
                print(node.data, end=" ")

            # If left child is not null push it
            # into the queue
            if node.left:
                q.append(node.left)

            # If right child is not null push
            # it into the queue
            if node.right:
                q.append(node.right)

# Driver code


# Let's construct the tree as
# shown in example
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
root.right.left = Node(6)
root.right.right = Node(7)
root.right.left.right = Node(8)

rightView(root)


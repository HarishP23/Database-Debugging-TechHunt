// 3.) RIGHT VIEW OF BINARY TREE
// Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side. Return the right view as a list.

// C++ Program :

#include <bits/stdc++.h>
using namespace std;

// A Binary Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;

    // Constructor to initialize the node with data
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

// Function to print Right view of binary tree
void printRightView(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // Get number of nodes for each level
        int n = q.size();

        // Traverse all the nodes of the current level
        while (n--)
        {

            Node *x = q.front();
            q.pop();

            // Print the last node of each level
            if (n == 0)
            {
                cout << x->data << " ";
            }
            // If left child is not null, push it into the queue
            if (x->left)
                q.push(x->left);
            // If right child is not null, push it into the queue
            if (x->right)
                q.push(x->right);
        }
    }
}

// Driver code
int main()
{
    // Let's construct the tree as shown in example
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);

    printRightView(root);

    return 0;
}

// c program:
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

typedef struct Queue
{
    Node *node;
    struct Queue *next;
} Queue;

void enqueue(Queue **front, Queue **rear, Node *node)
{
    Queue *new_node = (Queue *)malloc(sizeof(Queue));
    new_node->node = node;
    new_node->next = NULL;
    if (*rear)
    {
        (*rear)->next = new_node;
    }
    *rear = new_node;
    if (!(*front))
    {
        *front = *rear;
    }
}

Node *dequeue(Queue **front)
{
    if (*front == NULL)
        return NULL;
    Queue *temp = *front;
    Node *node = temp->node;
    *front = (*front)->next;
    free(temp);
    return node;
}

int isEmpty(Queue *front)
{
    return front == NULL;
}

Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void rightView(Node *root)
{
    if (root == NULL)
        return;

    Queue *front = NULL;
    Queue *rear = NULL;
    enqueue(&front, &rear, root);

    while (!isEmpty(front))
    {
        int n = 0;
        Queue *temp = front;
        while (temp)
        {
            temp = temp->next;
            n++;
        }

        for (int i = 1; i <= n; i++)
        {
            Node *curr = dequeue(&front);
            if (i == n)
            {
                printf("%d ", curr->data); // Rightmost node at each level
            }
            if (curr->left)
                enqueue(&front, &rear, curr->left);
            if (curr->right)
                enqueue(&front, &rear, curr->right);
        }
    }
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(5);
    root->right->right = newNode(4);

    printf("Right view of the binary tree: ");
    rightView(root);
    return 0;
}

// JAVA

import java.util.*;

class Node
{
    int data;
    Node left, right;

public
    Node(int data)
    {
        this.data = data;
        left = right = null;
    }
}

class Solution
{
    // Function to return list containing elements of the right view of a binary tree.
public
    List<Integer> rightView(Node root)
    {
        List<Integer> result = new ArrayList<>();
        if (root == null)
            return result;

        Queue<Node> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty())
        {
            int n = q.size();

            for (int i = 0; i < n; i++)
            {
                Node curr = q.poll();

                // If it's the last node of the current level, add it to result
                if (i == n - 1)
                {
                    result.add(curr.data);
                }

                // First push left, then right child to ensure right view
                if (curr.left != null)
                    q.add(curr.left);
                if (curr.right != null)
                    q.add(curr.right);
            }
        }

        return result;
    }

public
    static void main(String[] args)
    {
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.right = new Node(5);
        root.right.right = new Node(4);

        Solution sol = new Solution();
        List<Integer> rightView = sol.rightView(root);

        System.out.println("Right view of the binary tree: " + rightView);
    }
}

// python:
from collections import deque

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def right_view(root):
    if not root:
        return []

    ans = []
    q = deque([root])

    while q:
        n = len(q)

        for i in range(n):
            curr = q.popleft()

#If it's the last node of the current level, add to answer
            if i == n - 1:
                ans.append(curr.data)

#First push left, then right child to ensure right view
            if curr.left:
                q.append(curr.left)
            if curr.right:
                q.append(curr.right)

    return ans

#Example Usage
if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.right = Node(5)
    root.right.right = Node(4)

    print("Right view of the binary tree:", right_view(root))

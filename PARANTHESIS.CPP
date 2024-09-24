
5.) PARANTHESIS CHECKER
// /*
// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The driver code prints "balanced" if function return true, otherwise it prints "not balanced".
// *

// python:
#Function to check if the expression has balanced parentheses
def isBalanced(x):
    stack = []
#Dictionary to hold matching pairs
    brackets = {')': '(', '}': '{', ']': '['}
    
    for char in x:
#If the character is an opening bracket, push it onto the stack
        if char in brackets.values():
            stack.append(char)
#If it's a closing bracket
        elif char in brackets.keys():
#Check if the stack is empty or if it doesn't match the top of the stack
            if stack == [] or stack.pop() != brackets[char]:
                return False
#Stack should be empty if all opening brackets are matched
    return stack == []

#Driver code
expression = "[()]{}{[()()]()}"
if isBalanced(expression):
    print("balanced")
else:
    print("not balanced")

// C:

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

// Stack structure
char stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(char x)
{
    if (top == MAX - 1)
        return;
    stack[++top] = x;
}

// Function to pop an element from the stack
char pop()
{
    if (top == -1)
        return '\0';
    return stack[top--];
}

// Function to check if the expression is balanced
bool isBalanced(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            char popped = pop();
            if ((exp[i] == ')' && popped != '(') ||
                (exp[i] == '}' && popped != '{') ||
                (exp[i] == ']' && popped != '['))
            {
                return false;
            }
        }
    }
    return top == -1;
}

// Driver code
int main()
{
    char exp[] = "[()]{}{[()()]()}";
    if (isBalanced(exp))
        printf("balanced\n");
    else
        printf("not balanced\n");
    return 0;
}

// java:
import java.util.Stack;

public
class BalancedParentheses
{

    // Function to check if the expression is balanced
public
    static boolean isBalanced(String exp)
    {
        Stack<Character> stack = new Stack<>();
        for (char ch : exp.toCharArray())
        {
            if (ch == '(' || ch == '{' || ch == '[')
            {
                stack.push(ch);
            }
            else if (ch == ')' || ch == '}' || ch == ']')
            {
                if (stack.isEmpty())
                    return false;
                char top = stack.pop();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '['))
                {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }

    // Driver code
public
    static void main(String[] args)
    {
        String exp = "[()]{}{[()()]()}";
        if (isBalanced(exp))
            System.out.println("balanced");
        else
            System.out.println("not balanced");
    }
}

// C++:
#include <iostream>
#include <stack>
using namespace std;

// Function to check if the expression is balanced
bool isBalanced(string exp)
{
    stack<char> s;
    for (char ch : exp)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s.empty())
                return false;
            char top = s.top();
            s.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
            {
                return false;
            }
        }
    }
    return s.empty();
}

// Driver code
int main()
{
    string exp = "[()]{}{[()()]()}";
    if (isBalanced(exp))
        cout << "balanced" << endl;
    else
        cout << "not balanced" << endl;
    return 0;
}

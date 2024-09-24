// BFS:

// python:
from collections import deque

#BFS from given source s
def bfs(adj, s, visited):

#Create a queue for BFS
    q = deque()

#Mark the source node as visited and enqueue it
    visited[s] = True
    q.append(s)

#Iterate over the queue
    while q:

#Dequeue a vertex from queue and print it
        curr = q.popleft()
        print(curr, end=" ")

#Get all adjacent vertices of the dequeued
#vertex.If an adjacent has not been visited,
#mark it visited and enqueue it
        for x in adj[curr]:
            if not visited[x]:
                visited[x] = True
                q.append(x)

#Function to add an edge to the graph
def add_edge(adj, u, v):
    adj[u].append(v)
    adj[v].append(u)

#Example usage
if __name__ == "__main__":

#Number of vertices in the graph
    V = 5

#Adjacency list representation of the graph
    adj = [[] for _ in range(V)]

#Add edges to the graph
    add_edge(adj, 0, 1)
    add_edge(adj, 0, 2)
    add_edge(adj, 1, 3)
    add_edge(adj, 1, 4)
    add_edge(adj, 2, 4)

#Mark all the vertices as not visited
    visited = [False] * V

#Perform BFS traversal starting from vertex 0
    print("BFS starting from 0: ")
    bfs(adj, 0, visited)

// C++:
// C++ program for BFS of an undirected graph
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// BFS from given source s
void bfs(vector<vector<int>> &adj, int s,
         vector<bool> &visited)
{
    // Create a queue for BFS
    queue<int> q;

    // Mark the source node as visited and
    // enqueue it
    visited[s] = true;
    q.push(s);

    // Iterate over the queue
    while (!q.empty())
    {

        // Dequeue a vertex from queue and print it
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        // Get all adjacent vertices of the dequeued
        // vertex curr If an adjacent has not been
        // visited, mark it visited and enqueue it
        for (int x : adj[curr])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

// Function to add an edge to the graph
void addEdge(vector<vector<int>> &adj,
             int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u); // Undirected Graph
}

int main()
{
    // Number of vertices in the graph
    int V = 5;

    // Adjacency list representation of the graph
    vector<vector<int>> adj(V);

    // Add edges to the graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);

    // Mark all the vertices as not visited
    vector<bool> visited(V, false);

    // Perform BFS traversal starting from vertex 0
    cout << "BFS starting from 0 : \n";
    bfs(adj, 0, visited);

    return 0;
}

// C:
// C program for BFS of an undirected graph
#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Structure to represent a node in adjacency list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add an edge to the graph
void addEdge(struct Node *adj[], int u, int v)
{
    struct Node *newNode = createNode(v);
    newNode->next = adj[u];
    adj[u] = newNode;

    // Undirected graph
    newNode = createNode(u);
    newNode->next = adj[v];
    adj[v] = newNode;
}

// Function to perform Breadth First Search on a graph
// represented using adjacency list
void bfs(struct Node *adj[], int vertices,
         int source, int visited[])
{
    // Create a queue for BFS
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;

    // Mark the current node as visited and enqueue it
    visited[source] = 1;
    queue[rear++] = source;

    // Iterate over the queue
    while (front != rear)
    {

        // Dequeue a vertex from queue and print it
        int curr = queue[front++];
        printf("%d ", curr);

        // Get all adjacent vertices of the dequeued vertex
        // curr If an adjacent has not been visited,
        // then mark it visited and enqueue it
        struct Node *temp = adj[curr];
        while (temp != NULL)
        {
            int neighbor = temp->data;
            if (!visited[neighbor])
            {
                visited[neighbor] = 1;
                queue[rear++] = neighbor;
            }
            temp = temp->next;
        }
    }
}

int main()
{
    // Number of vertices in the graph
    int vertices = 5;

    // Adjacency list representation of the graph
    struct Node *adj[vertices];
    for (int i = 0; i < vertices; ++i)
        adj[i] = NULL;

    // Add edges to the graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);

    // Mark all the vertices as not visited
    int visited[vertices];
    for (int i = 0; i < vertices; ++i)
        visited[i] = 0;

    // Perform BFS traversal starting from vertex 0
    printf("Breadth First Traversal "
           "starting from vertex 0: ");
    bfs(adj, vertices, 0, visited);

    return 0;
}

// java:
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public
class GfG
{

    // BFS from given source s
    static void bfs(List<List<Integer>> adj, int s,
                    boolean[] visited)
    {

        // Create a queue for BFS
        Queue<Integer> q = new LinkedList<>();

        // Mark the source node as visited and
        // enqueue it
        visited[s] = true;
        q.offer(s);

        // Iterate over the queue
        while (!q.isEmpty())
        {

            // Dequeue a vertex from queue and print it
            int curr = q.poll();
            System.out.print(curr + " ");

            // Get all adjacent vertices of the dequeued
            // vertex. If an adjacent has not been visited,
            // mark it visited and enqueue it
            for (int x : adj.get(curr))
            {
                if (!visited[x])
                {
                    visited[x] = true;
                    q.offer(x);
                }
            }
        }
    }

    // Function to add an edge to the graph
    static void addEdge(List<List<Integer>> adj,
                        int u, int v)
    {
        adj.get(u).add(v);
        adj.get(v).add(u);
    }

public
    static void main(String[] args)
    {
        // Number of vertices in the graph
        int V = 5;

        // Adjacency list representation of the graph
        List<List<Integer>> adj = new ArrayList<>();
        for (int i = 0; i < V; i++)
        {
            adj.add(new ArrayList<>());
        }

        // Add edges to the graph
        addEdge(adj, 0, 1);
        addEdge(adj, 0, 2);
        addEdge(adj, 1, 3);
        addEdge(adj, 1, 4);
        addEdge(adj, 2, 4);

        // Mark all the vertices as not visited
        boolean[] visited = new boolean[V];

        // Perform BFS traversal starting from vertex 0
        System.out.println("BFS starting from 0 : ");
        bfs(adj, 0, visited);
    }
}

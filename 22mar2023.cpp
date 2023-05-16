#include <iostream>
#include <vector>

using namespace std;

const int N = 3; // number of nodes

vector<int> adj[N]; // adjacency list to store graph

// function to add edges to the graph
void addEdge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// function to print the path between two nodes
void printPath(int start, int end, vector<int> &path, vector<bool> &visited) {
    if (start == end) {
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << end << endl;
        return;
    }

    visited[start] = true;
    path.push_back(start);

    for (int i = 0; i < adj[start].size(); i++) {
        int next = adj[start][i];
        if (!visited[next]) {
            printPath(next, end, path, visited);
        }
    }

    path.pop_back();
    visited[start] = false;
}

int main() {
    // create the graph
    addEdge(0, 1);
    addEdge(1, 2);
    addEdge(2, 0);

    // find path between each pair of nodes
    vector<int> path;
    vector<bool> visited(N, false);

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            cout << "Path from " << i << " to " << j << ": ";
            printPath(i, j, path, visited);
        }
    }

    return 0;
}

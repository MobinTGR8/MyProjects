#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);  // for undirected graphs
}

void removeEdge(vector<vector<int>>& graph, int u, int v) {
    graph[u].erase(remove(graph[u].begin(), graph[u].end(), v), graph[u].end());
    graph[v].erase(remove(graph[v].begin(), graph[v].end(), u), graph[v].end());
}

void printGraph(const vector<vector<int>>& graph) {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << ": ";
        for (int v : graph[i]) cout << v << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<int>> graph(5);  // 5 vertices
    addEdge(graph, 0, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printGraph(graph);

    cout << "Removing edge (1, 2)\n";
    removeEdge(graph, 1, 2);
    printGraph(graph);

    return 0;
}

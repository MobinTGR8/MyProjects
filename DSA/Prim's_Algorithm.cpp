#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minKey(vector<int>& key, vector<bool>& mstSet) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < static_cast<int>(key.size()); ++v)
        if (!mstSet[v] && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}

void primMST(vector<vector<int>>& graph) {
    int V = graph.size();
    vector<int> parent(V), key(V, INT_MAX);
    vector<bool> mstSet(V, false);

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " : " << graph[i][parent[i]] << endl;
}

int main() {
    vector<vector<int>> graph = {{0, 2, 0, 6, 0},
                                 {2, 0, 3, 8, 5},
                                 {0, 3, 0, 0, 7},
                                 {6, 8, 0, 0, 9},
                                 {0, 5, 7, 9, 0}};
    primMST(graph);
    return 0;
}

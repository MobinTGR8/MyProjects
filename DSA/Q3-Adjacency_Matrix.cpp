#include <iostream>
#include <vector>
using namespace std;

void buildAdjMatrix(int M, vector<pair<int, int>>& edges) {
    vector<vector<int>> adjMatrix(M, vector<int>(M, 0));
    
    for (auto edge : edges) {
        adjMatrix[edge.first - 1][edge.second - 1] = 1;
    }
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int M1 = 5;
    vector<pair<int, int>> edges1 = {{3, 4}, {5, 3}, {2, 4}, {1, 5}, {3, 2}, {4, 2}, {3, 1}, {5, 1}};
    buildAdjMatrix(M1, edges1);

    int M2 = 6;
    vector<pair<int, int>> edges2 = {{1, 6}, {2, 1}, {2, 3}, {3, 5}, {4, 5}, {4, 2}, {2, 6}, {5, 3}, {4, 3}, {6, 4}};
    buildAdjMatrix(M2, edges2);

    return 0;
}

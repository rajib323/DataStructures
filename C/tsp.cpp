#include <bits/stdc++.h>
using namespace std;
#define V 4
int travllingSalesmanProblem(int graph[][V], int s)
{
    vector<int> vertex;
    for (int i = 0; i < V; i++)
        if (i != s)
            vertex.push_back(i);
 
    int min_path = INT_MAX;
    do {
        int current_pathweight = 0;
        int k = s;
        for (int i = 0; i < vertex.size(); i++) {
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i];
        }
        current_pathweight += graph[k][s];
 
        // update minimum
        min_path = min(min_path, current_pathweight);
 
    } while (next_permutation(vertex.begin(), vertex.end()));
 
    return min_path;
}
int main()
{
    int graph[][V] = { { 0, 200, 42, 35 },
                       { 200, 0, 30, 20 },
                       { 42, 30, 0, 60 },
                       { 35, 20, 60, 0 } };
    int s = 0;
    cout <<"Cost of Shortest Path : " << travllingSalesmanProblem(graph, s) << endl;
    return 0;
}
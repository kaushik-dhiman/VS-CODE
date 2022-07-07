#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph_AL
{
    int vertices, edges;
    vector<vector<int>> Graph;

public:
    void getValue();
    void createGraph();
    void BFS(int);
};

void Graph_AL::getValue()
{
    cout << "\nEnter the Number of Vertices and Edges : ";
    cin >> vertices >> edges;
    Graph.resize(vertices + 1);
}

void Graph_AL::createGraph()
{
    int a, b;
    cout << "\nEnter the Vertices Containing Edges : ";
    for (int i = 0; i < edges; i++)
    {
        cin >> a >> b;
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }
}

void Graph_AL::BFS(int source)
{
    vector<bool> vis(vertices + 1, false);
    queue<int> q;
    q.push(source);
    vis[source] = true;
    cout << "\nThe BFS for the Graph is : ";
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        cout << t << " ";
        for (auto it : Graph[t])
        {
            if (!vis[it])
            {
                vis[it] = true;
                q.push(it);
            }
        }
    }
}

int main()
{
    Graph_AL G;
    G.getValue();
    G.createGraph();
    int source = 0;
    cout << "\nEnter the Source Node : ";
    cin >> source;
    G.BFS(source);
    return 0;
}
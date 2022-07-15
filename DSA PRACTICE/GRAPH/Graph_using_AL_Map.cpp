#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{

    public:
        unordered_map<T, list<T> > adj;

        void addEdge(T u, T v, bool direction)
        {
            //direction = 0 -> undirected
            //direction = 1 -> directed

            adj[u].push_back(v);

            if(direction == 0) adj[v].push_back(u);

        }

        void printAdjList()
        {
            for(auto i:adj)
            {
                cout << i.first << " -> ";
                for(auto j: i.second)
                {
                    cout << j << ", ";
                }
                cout << endl;
            }
        }

};

int main()
{
    int n;
    cout << "Enter the number of vertices " << endl;
    cin >> n;

    int e;
    cout << "Enter the number edges " << endl;
    cin >> e;

    Graph<int> G;

    cout << "Enter the vertices containing Edges " << endl;
    for(auto i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        G.addEdge(u, v, 0); // Creating Undirected Graph.
    }


    G.printAdjList();

    return 0;
}
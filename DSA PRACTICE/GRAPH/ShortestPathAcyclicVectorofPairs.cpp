//https://www.codingninjas.com/codestudio/library/shortest-path-in-a-directed-acyclic-graph
//ref for input
#include<bits/stdc++.h>
using namespace std;

class Graph
{
    public:
        int V;
        int E;

        vector<pair<int,int>> *adj;

        Graph(int V, int E)
        {
            this -> V = V;
            this -> E = E;
            this -> adj = new vector<pair<int, int>>[V];
        }


        void addEdge(int u, int v, int weight)
        {
            pair<int, int> p = make_pair(v, weight);
            adj[u].push_back(p);
        }


        void printAdj()
        {
            for( int i = 0; i < V; i++)
            {
                cout << i << " -> ";
                for(int j = 0 ; j < adj[i].size(); j++)
                {
                    cout<< "{" << adj[i][j].first << "," << adj[i][j].second <<"}";
                }
                cout << "\n";
            }
            // for(auto i : adj)
            // {
            //     // vector<pair<int, int>> i = k;
            //     // cout << i.first << " -> ";
            //     for(auto j : i)
            //     {
            //         cout << "{" << j.first << ", " << j.second << "}, ";
            //     }
            //     cout << endl;
            //  }
        }


        void dfs(int node, vector<int> visited, stack<int> &stk)
        {
            visited[node] = 1;
            for(auto neighbour : adj[node])
            {
                if(!visited[neighbour.first])
                {
                    dfs(neighbour.first, visited, stk);
                }
            }
            stk.push(node);
        }


        void getShortestPath(int source, vector<int>& distance,stack<int>& stk)
        {
            distance[source] = 0;

            while(!stk.empty())
            {
                int top = stk.top();
                stk.pop();

                if(distance[top] != INT_MAX)
                {
                    for(auto i : adj[top])
                    {
                        if(distance[top] + i.second < distance[i.first])
                        {
                            distance[i.first] = distance[top] + i.second;
                        }
                    }
                }
            }
        }
};



int main()
{
    int V = 6, E = 9;
    Graph g(V, E);
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);
    
    g.printAdj();



    //int n = 6;
    // topological sort
    vector<int> visited(V, 0);
    stack<int> s;
    
    for(int i = 0; i < V ;i++)
        if(!visited[i])
            g.dfs(i, visited, s);


    // get shortest path    
    int source = 1;

    vector<int> distance(V,INT_MAX);

    g.getShortestPath(source, distance, s);

    cout  << "Answer is : " << endl;

    for(auto x : distance)
        cout << x << " ";
    cout << endl;

    return 0;
}
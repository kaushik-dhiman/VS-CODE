//https://www.codingninjas.com/codestudio/library/shortest-path-in-a-directed-acyclic-graph
//ref for input
#include<bits/stdc++.h>
using namespace std;

class Graph
{
    public:
        unordered_map<int, list<pair<int,int> > > adj;

        void addEdge(int u, int v, int weight)
        {
            pair<int, int> p = make_pair(v, weight);
            adj[u].push_back(p);
        }

        void printAdj()
        {
            for(auto i : adj)
            {
                cout << i.first << " -> ";
                for(auto j : i.second)
                {
                    cout << "{" << j.first << ", " << j.second << "}, ";
                }
                cout << endl;
            }
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
    Graph g;
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



    int n = 6;
    // topological sort
    vector<int> visited(n, 0);
    stack<int> s;
    
    for(int i = 0; i < n ;i++)
        if(!visited[i])
            g.dfs(i, visited, s);


    // get shortest path    
    int source = 1;

    vector<int> distance(n,INT_MAX);

    g.getShortestPath(source, distance, s);

    cout  << "Answer is : " << endl;

    for(auto x : distance)
        cout << x << " ";
    cout << endl;

    return 0;
}
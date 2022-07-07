#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int, int>> adj[], int A, int B, int W)
{
    adj[A].push_back({B, W});
    adj[B].push_back({A, W});
}

void TSP(vector<pair<int, int>> adj[], int src, int V)
{
    //priority_queue<pair<int, int>> pq;
    priority_queue<pair<int, int>,vector<pair<int,int>>,greater<>> pq;
    pq.push({0, src});
    int last_vis = 0;
    vector<bool> vis(V + 1, false);
    int total_Cost = 0;
    while (!pq.empty())
    {
        pair<int, int> cr = pq.top();
        pq.pop();
        vis[cr.second] = true;
        while (!pq.empty())
            pq.pop();
        total_Cost += cr.first;
        cout << cr.second << " -> ";
        last_vis = cr.second;
        for (auto it : adj[cr.second])
        {
            if (vis[it.first] == false)
            {
                pq.push({it.second, it.first});
            }
        }
    }
    cout << src;
    
    //total_Cost += adj[last_vis][0].second;
    
    for (auto it : adj[src])
    {
        if (it.first == last_vis)
        total_Cost += it.second;
    }
    cout << "\nTotal Travelling Cost is : " << total_Cost;
}

int main()
{
    int V = 0, E = 0;
    cout << "\nEnter the number of Vertices and Edges : ";
    cin >> V >> E;
    vector<pair<int, int>> adj[V + 1];
    cout << "\nEnter the Vertices Containing Edges along with the weights : ";
    for (int i = 0; i < E; i++)
    {
        int A, B, W;
        cin >> A >> B >> W;
        addEdge(adj, A, B, W);
    }

    int src = 0;
    cout << "\nEnter the Source Node : ";
    cin >> src;

    TSP(adj, src, V);
    return 0;
}
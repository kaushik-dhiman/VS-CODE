#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cout<<"Enter the Number of vertices and edges : ";
    cin>>n>>e;
    vector<vector<int>> graph;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        for(int j=0;j<n;j++)
            v.push_back(0);
        graph.push_back(v);
    }

    cout<<"Enter the Vertex which contains Edges : ";
    int a,b;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        graph[a-1][b-1]=1;
        graph[b-1][a-1]=1;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(graph[i][j]==1)
            {
                cout<<i+1<<" "<<j+1<<"\n";    
            }
        }
    }
    return 0;
}

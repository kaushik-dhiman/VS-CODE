#include<iostream>
#include<vector>
using namespace std;

void create(vector <vector<int>> &graph, int n, int u, int v)
{
    graph[u][v]=1;
    graph[v][u]=1;
}
void display(vector <vector<int>> &graph, int n)
{
    // for(int i=1; i<=n; i++)
    // {
    //     cout<<"Head "<<i;
    //     for(auto x : graph[i])
    //         cout<<" -> "<<x;
    //     cout<<endl;
    // }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout<<graph[i][j];
            // FOR NO DUPLICACY OF PAIR OF VECTOR.
            // if(graph[i][j]==1)
            // {
            //     cout<<i<<" "<<j<<"\n";
            //     graph[j][i]=0;
            // }
        cout<<endl;
    }
}
int main()
{
    int n, e;
    cout<<"ENTER THE NO. OF VERTICES AND NO. OF EDGES : ";
    cin>>n>>e;
    vector<vector<int>> graph(n+1, vector<int>(n+1, 0));
    //OR WE CAN DECLARE VECTOR IN THIS WAY ALSO, IT WILL ALSO GIVE THE SAME RESULT.
    //vector<int> graph[n+1];
    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=0; j<=n; j++)
    //     {
    //         graph[i].push_back(0);
    //     }
    // }
    cout<<"ENTER PAIR OF VERTICES : ";
    int u,v;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v;
        create(graph, n, u, v);
    }
    cout<<"GRAPH VERTICES IN BFS IS : \n";
    display(graph, n);
    return 0;
}

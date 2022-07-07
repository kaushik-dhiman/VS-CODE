#include <bits/stdc++.h>
using namespace std;
 
void printpath(vector<int>& path,int src,int dst)
{
    int size = path.size();
    if(size==0)
    {
        cout<<"\nDestination Can't Be Reached.";
        return;
    }
    cout << "Path from source " << src
         << " to destination " << dst << "\n";
    for (int i = 0; i < size; i++)
        cout << path[i] << " ";   
    cout << endl;
}
 
int isNotVisited(int x, vector<int>& path)
{
    int size = path.size();
    for (int i = 0; i < size; i++)
        if (path[i] == x)
            return 0;
    return 1;
}


void findpaths(vector<vector<int> >&g, int src,
                                 int dst, int v)
{
    int flag=0;
    queue<vector<int> > q;
    vector<int> path;
    path.push_back(src);
    q.push(path);
    while (!q.empty()) {
        path = q.front();
        q.pop();
        int last = path[path.size() - 1];
 
        if (last == dst)
        {
            printpath(path,src,dst);       
            flag=1;
        }
        for (int i = 0; i < g[last].size(); i++) {
            if (isNotVisited(g[last][i], path)) {
                vector<int> newpath(path);
                newpath.push_back(g[last][i]);
                q.push(newpath);
            }
        }
    }
    if(flag==0)
        cout<<"\nNo Path Exists.";
}
 
int main()
{
    vector<vector<int>> g;
    cout<<"\nEnter the Number of Vertices and Edges : ";
    int v,e;
    cin>>v>>e;
    g.resize(v);
    cout<<"Enter The Vertices Containing Edges : ";
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
 
    cout<<"\nEnter the Source Node and Destination Node : ";
    
    int src, dst;
    cin>>src>>dst;

    findpaths(g, src, dst, v);
 
    return 0;
}
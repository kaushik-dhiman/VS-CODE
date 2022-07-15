#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    int arr[n+1];
    cin >> n;
    for(int i = 1; i <=n; i++)
    {
        cin >> arr[i];
    }
    int a = 0;
    int b = 0;
    int k = n - 1;
    vector<vector<int>> adj(n+1,vector<int>(n+1,-1));
    while(k--)
    {
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    adj[1][1] = 1;
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < n + 1; j++)
        {
            cout << adj[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
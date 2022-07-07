#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alloc[10][10],max[10][10];
    int avail[10]={0},work[10],total[10];
    int i,j,k,n,need[10][10];
    int m;
    int	count=0,c=0;
    char finish[10]={'n','n','n','n','n','n','n','n','n','n'};
    cout<<"Enter the No of processes and resources : ";
    cin>>n>>m;
    cout<<"Enter the Claim Matrix : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>max[i][j];
    }
    cout<<"Enter the Allocation Matrix : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>alloc[i][j];
    }
    cout<<"Enter Resource Vector : ";
    for(int i=0;i<m;i++)
        cin>>total[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            avail[j]+=alloc[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        work[i]=avail[i];
    }
    for(int j=0;j<m;j++)
    {
        work[j]=total[j]-work[j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    Block:
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<m;j++)
            {
                if((need[i][j]<=work[j]&&(finish[i]=='n')))
                    c++;
            }
            if(c==m)
            {
                cout<<"All resouces can be allocated to process "<<i+1;
                cout<<"\nAvailable Resources are : ";
                for(k=0;k<m;k++)
                {
                    work[k]+=alloc[i][k];
                    cout<<work[k];
                }
                    cout<<"\n";
                    finish[i]=='y';
                    cout<<"\nProcess "<<i+1<<" Executed : "<<finish[i];
                    count++;
            }
        }
            if(count!=n)
                goto Block;
            else   
                cout<<"\nSystem is in Safe Mode";
            cout<<"\nThe given state is safe state";
    return 0;
}
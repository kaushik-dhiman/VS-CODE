#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m[4][4]={{1,2,3,4},{5,6,7,8},{9,1,2,4},{4,5,6,7}};
    cout<<"\nGiven Matrix :\n";
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0;i<2;i++)
    {
        
        for(int j=0;j<4;j++)
        {
            if((i+j)==3)
            {
                continue;
            }
            else
            {
                int temp=m[i][j];
                m[i][j]=m[4-i-1][4-j-1];
                m[4-1-i][4-j-1]=temp;
            }
        }
    }
    cout<<"\nAfter replacing lower triangular with upper trangular :\n";
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
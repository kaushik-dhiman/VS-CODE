#include<bits/stdc++.h>
using namespace std;

int miniMax(int depth,int Index,bool isMax,vector<int> &scores,int max_depth)
{
    if(depth == max_depth)
        return scores[Index];

    if(isMax)
        return max(miniMax(depth+1,Index*2,false,scores,max_depth),miniMax(depth+1,Index*2+1,false,scores,max_depth));
    else
        return min(miniMax(depth+1,Index*2,true,scores,max_depth),miniMax(depth+1,Index*2+1,true,scores,max_depth));
}

int main()
{
    int size;
    cout << "\nEnter the Number of leaf nodes : ";
    cin >> size;
    vector<int> scores(size);
    for(int i=0;i<size;i++)cin>>scores[i];
    int max_depth=1+log2(size/2);
    int result=miniMax(0,0,true,scores,max_depth);
    cout<<"\nResult is :"<<result;
    return 0;
}
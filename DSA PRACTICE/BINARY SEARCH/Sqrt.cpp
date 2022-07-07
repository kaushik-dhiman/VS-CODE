 #include<bits/stdc++.h>
 using namespace std;

int mySqrt(int x) 
{
    if(x == 1) return 1;
    int low = 0, high = x;
    int ans = -1;
    while(low <= high)
    {
        long long int mid = low + (high - low) / 2;
        if(mid * mid == x)
           return mid;
        if(mid * mid > x)
           high = mid - 1;
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for(double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;

}


int main()
{
    int n = 30;
    int tempSol = mySqrt(n);
    cout<<tempSol;
    cout<<"\nAns : "<<morePrecision(n,3,tempSol);
    return 0;
}
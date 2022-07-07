#include<bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if(b == 0) return 1;
    if(b == 1) return a;

    int ans = power(a, b/2);

    if(b&1)
    {
        return a * ans *ans;
    }
    else
    {
        return ans *ans;
    }
}


int main()
{
    int a, b;
    cin >> a >> b;
    cout << a <<" to power "<< b << " is : " << power(a, b);
    return 0;
}
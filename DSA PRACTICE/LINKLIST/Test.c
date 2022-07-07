#include<stdio.h>
int main()
{
    int x,y,m,n;
    scanf("%d %d",&x,&y);
    m=x;n=y;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
    printf("%d",n);
    return 0;
}


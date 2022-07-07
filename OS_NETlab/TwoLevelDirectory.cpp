#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char mdname[5],sdname[10][5],fname[10][10][5],name[5];
    int nf[10],a=0,sdno=0;
    printf("enter the name of the main directory(max 5 letters)\n");
    scanf("%s",mdname);
    printf("enter the number of the subdirectories directory(max 10)\n");
    scanf("%d",&sdno);
    for(int g=0;g<sdno;g++)
    {
         printf("enter the name of the this sub directory number %d\n ",g+1);
         scanf("%s",sdname[g]);
         printf("enter the number of files you want to store in this sub directory number %s(maximum 10)\n",sdname[g]);
         scanf("%d",&nf[g]);
         for(int i=0,j=0;i<nf[g];i++)
        {
           printf("enter the name of file(max 5 letters)\n");
           scanf("%s",name);
           for(int k=0;k<i;k++)
           {
              if(!strcmp(name,fname[g][k]))
              {
                a=1;
                break;
               }
              }
             if(a==1)
            {
              a=0;
              i=i-1;
              continue;
             }
            strcpy(fname[g][j++],name);
        }
     }
    printf("the name of the main directory %s\n",sdname);
    for(int g=0;g<sdno;g++)
    {
        printf("the name of this sub directory %s",sdname[g]);
        printf("And the files are presented in the sub directory are\n");
        for(int i=0;i<nf[g];i++)
       {
        printf("%s\n",fname[g][i]);
        }
    }
}

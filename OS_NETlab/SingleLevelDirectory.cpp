#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int nf = 0, i = 0, j = 0, ch;
    char mdname[10], fname[10][10], name[10];
    cout<<"\nEnter the directory name : ";
    cin>>mdname;
    cout<<"\nEnter the number of files : ";
    cin>>nf;
    do
    {
        cout<<"\nEnter file name to be created : ";
        cin>>name;
        for (i = 0; i < nf; i++)
        {
            if (!strcmp(name, fname[i]))
                break;
        }
        if (i == nf)
        {
            strcpy(fname[j++], name);
            nf++;
        }
        else
            cout<<"\nThere is already a file with name : "<<name;
        cout<<"\nDo you want to enter another file(yes - 1 or no - 0) : ";
        cin>>ch;
    } while (ch == 1);
    cout<<"\nDirectory name is : "<<mdname;
    cout<<"\nFiles names are : ";
    for (i = 0; i < j; i++)
        cout<<fname[i]<<", ";
}
#include <iostream>
#include <windows.h>
using namespace std;
int x;
int y;
int count;
void upper_part(int);
void lower_part(int);
main()
{
    system("cls");
    int r;
    cout<<" Enter Number Of Rows ";
    //rows must be in even numbers;
    cin>>r;
    upper_part(r);
    lower_part(r);
}
void upper_part(int r)
{
    count=r/2; 
    for(int i=1;i<=count;i++)
    {
        for(x=count;x>=i;x--)
        {   
            if(x!=i)
	    {
            cout<<" ";
	    }
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;        
    }
}
void lower_part(int r)
{ 
	count=r/2;
    for(int i=1;i<=count;i++)
    {
        for(int j=count;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        
    }
}

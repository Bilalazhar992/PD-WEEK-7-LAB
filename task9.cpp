#include <iostream>
using namespace std;
main()
{
    int rows;
    cout<<" Enter no of rows ";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        int s=(rows*2)-(2*i);
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(;s>=1;s--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
	cout<<endl;
    }
}
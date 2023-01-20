#include <iostream>
using namespace std;
main()
{
    int r;
    cout<<" Enter Number of rows ";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for (int j=r;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
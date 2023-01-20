#include <iostream>
using namespace std;
main()
{
    int rows;
    cout<<" Enter Numbers Of rows of triangle ";
    cin>>rows;
    int i;
    i=1;
    int n=0;
    while(i<=rows)
    {
        n=n+i;
	i++;
    }
    cout<<" This triangle has  "<<n<<" number of dots ";
}
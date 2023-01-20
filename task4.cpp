#include <iostream>
using namespace std;
main()
{
    int n;
    cout << " Enter the end term of our interval ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(i % 4 != 0)
        {
                 cout << i << " ";
        }
        if (i % 4 == 0)
        {
            int n;
            n = i * 10;
            cout << n << " ";
        }
    }
}
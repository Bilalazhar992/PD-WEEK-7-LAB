#include <iostream>
using namespace std;
void percentage1(int);
int i;
float p1,p2,p3;
int n;
main()
{
    int num;
    cout<<" How many numbers you wanted to enter ";
    cin>>n;
    cout<<" Enter all numbers ";
    i=1;
    p1=0;
    p2=0;
    p3=0;
    while(i<=n)
    {
        cin>>num;
        percentage1(num);
        i++;
    }
}
    void percentage1(int num)
    {
	
        if(num%2==0)
        {
             p1++;
        }
        if(num%3==0)
        {
             p2++;
        }
        if(num%4==0)
        {
             p3++;
        }
        if(i==n)
        {
            p1=(p1*100.0)/n;
            cout<<" Percentage of numbers that are totally divisible by 2 "<<p1<<endl;
            p2=(p2*100.0)/n;
            cout<<" Percentage of numbers that are totally divisible by 3 "<<p2<<endl;
            p3=(p3*100.0)/n;
            cout<<" Percentage of numbers that are totally divisible by 4 "<<p3<<endl;
        }
    }

#include <iostream>
using namespace std;
void carriage(int);
void average_price();
void percentage_calculator();
int i;
int n;
int total_weight;
float money;
float weight_by_minibus;
float weight_by_truck;
float weight_by_train;
main()
{
    int weight;
    money=0;
    total_weight=0;
    weight_by_minibus=0;
    weight_by_truck=0;
    weight_by_train=0;
    cout<<" Number of carriages ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<" Enter weight of "<< i<<" carriage in tons ";
        cin>>weight;
        carriage(weight);
        total_weight=total_weight+weight;
    }
    average_price();
    percentage_calculator();
}
    void carriage(int weight)
    {
    if(weight<=3)
    {
        money=money+(weight*200);
        weight_by_minibus=weight_by_minibus+weight;    
    }
    if(weight>3 && weight<=11)
    {
        money=money=(weight*175);
        weight_by_truck=weight_by_truck+weight;
    }
    if(weight>11)
    {
        money=money+(weight*120);
        weight_by_train=weight_by_train+weight;
    }
    }
    void average_price()
    {
        cout<<" Average per ton carriage "<<endl;
        cout<<money/total_weight<<endl;
    } 
    void percentage_calculator()
    {
        float p1;
        float p2;
        float p3;
        p1=(weight_by_minibus/total_weight)*100;
        cout<<" Percentage of carriage carried by minibus "<<p1<<"%"<<endl;
        p2=(weight_by_truck/total_weight)*100;
        cout<<" Percentage of carriage carried by truck "<<p2<<"%"<<endl;
        p3=(weight_by_train/total_weight)*100;
        cout<<" Percentage of carriage carried by train "<<p3<<"%"<<endl;
    }
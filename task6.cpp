#include <iostream>
using namespace std;
main()
{
    int days;
    int patient; 
    cout<<" Enter Number Days of Monitering hospital ";
    cin>>days;
    int treated_patient=0;
    int difference=0;
    int difference1;
    int no_of_docters=7;
    for(int i=1;i<=days;i++)
    {
      cout<<" Day "<<i<<" Status ";
      cin>>patient;
	if(i%3==0)
      {
        if(difference>treated_patient)
        {
            no_of_docters++;
        }
      }
      if(patient>=7)
      {
      treated_patient=(1*no_of_docters)+treated_patient;
      }
      if(patient>7)
      {
        difference1=patient-no_of_docters;
        difference=difference1+difference;
      }
	if(patient<7)
	{
         treated_patient=treated_patient+patient;
	}
    }
    cout<<" Treated Patients: "<<treated_patient;
    cout<<" Untreated Patients: "<<difference;
}


    
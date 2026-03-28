#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter number of resistors in series circuit:";
    cin>>n;
    double resistor[n];
    double totalresistance=0.0;
    cout<<"enter the resistance values(in ohms) of the "<<n<< "resistors, one per line :"<<endl;
    for(int i=0; i<n; i++){
        cin>>resistor[i];
        totalresistance += resistor[i];


    }
    cout<<"the total resistance of theseries circuit is :"<<totalresistance<<"ohms."<<endl;
    return 0;
    
}
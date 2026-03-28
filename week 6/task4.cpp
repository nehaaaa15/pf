#include<iostream>
using namespace std;
main()
{
    int numbers[5];
    for(int i=0; i<5; i=i+1)
    {
        cout<<"enter number :";
        cin>>numbers[i];


    }
    cout<<"the element is "<<numbers[0]<<endl;
    cout<<"the element is "<<numbers[4]<<endl;
    
}
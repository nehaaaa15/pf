#include<iostream>
using namespace std;
main()
{
    char arr[100];
    cout<<"enter a word :";
    cin>>arr;

    for(int i=0 ; arr[i] !='\0'; i++){
        cout<<arr[i]<< "found at position :"<<i<<endl;

    }
    return 0;
    
}
#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    int arr[100];
    int largest;
    cout<<"enter "<< n << "numbers, one per line :"<<endl;
    for(int i=0;i<n; i++){
        cin>>arr[i];
        if(i==0|| arr[i]>largest){
            largest=arr[i];

        }
    }
    cout<<"the largest number entered is :"<<largest<<endl;
    return 0;
    

}
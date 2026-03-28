#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<" enter number of elements :";
    cin>>n;
    if(n<=0){
        cout<<"invalid input. number of elements must be greater than 0 :"<<endl;
        return 0;


    }
    int arr[n];
    cout<<"enter "<<n<<"numbers,one per line :"<<endl;
    for(int i=0;i<n; i++ )
    {
        cin>>arr[i];

    }
    cout<<"number in reverse order :";
    for(int i= n-1;i>=0 ;i--)
    {
        cout<<arr[i]<<"";
    }
    cout<<endl;
    return 0;

}
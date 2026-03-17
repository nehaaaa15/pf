#include<iostream>
using namespace std;
main(){
    int age ,machineprice,toyprice;
    cout<<"enter lily age";
    cin>>age;
    cout<<"enter price of machine"<<endl;
    cin>>machineprice;
    cout<<"enter price of each toy"<<endl;
    cin>>toyprice;
    int gift=10,saved=0,toy=0;
    for(int i=1;i<=age ; i++){
        if (i%2==0)
        {
            saved+=(gift-1);
            gift+=10;
        
        }
        else {
            toy=toy+1;
        }
    }
    int toymoney=toy*toyprice;
    int totalsavedmoney=toymoney+saved;
    if (machineprice<=totalsavedmoney)
    {
       cout<<"yes";
       int remaining=totalsavedmoney-machineprice;
       cout<<"remaining money"<<remaining;
    }
    else
    {cout<<"no";
    int insufficient=machineprice-totalsavedmoney;
    cout<<"you dont have enough money"<<insufficient;
    }
}
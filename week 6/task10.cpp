#include<iostream>
using namespace std;
main()
{
    string  input;
    cout<<"input :";
    cin>>input;
    string output= "";
    for(char c : input){
        if (c=='z')output+='a';
        else if(c=='Z')output+='A';
        else output+=(char)(c+1);

    }
    cout<<"output :"<<output<<endl;
    return 0;
    
}
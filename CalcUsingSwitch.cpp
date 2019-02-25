#include<iostream>
#include<cstdlib>
using namespace std;

main()
{
    beginning:

    int var1,var2;
    system("cls");
    cout<<"Enter First Number"<<endl;
    cin>>var1;
    cout<<"Enter Second Number"<<endl;
    cin>>var2;

    char dec1;
    cout<<"Which Operation do you want to perform on both the numbers?"<<endl;
    cout<< "+ = Addition"<<endl;
    cout<< "- = Substraction"<<endl;
    cout<< "* = Multiplication"<<endl;
    cout<< "/ = Division"<<endl;
    cin>>dec1;

    if(dec1=='+')
    {
        cout<<var1<<"+"<<var2<<" "<<"="<<" "<<(var1+var2)<<endl;
    }
    else if(dec1=='-')
    {
        cout<<var1<<"-"<<var2<<" "<<"="<<" "<<(var1-var2)<<endl;
    }
    else if(dec1=='*')
    {
        cout<<var1<<"*"<<var2<<" "<<"="<<" "<<(var1*var2)<<endl;
    }
    else if(dec1=='/')
    {
        if(var2 == 0)
                cout<<"You can't divide by 0"; 
            else
                cout<<var1<<"/"<<var2<<" "<<"="<<" "<<(var1/var2)<<endl;
    }
    else
        cout<<"Wrong Selection.Please Try Again."<<endl;

    char dec2;
    cout<<"Do you wish to perform any more operations? Select (Y/N)"<<endl;
    cin>>dec2;
        if(dec2=='y'|| dec2=='Y')
            goto beginning;
        else
            cout<<"Have a nice day Hooman!"<<endl;
} 

#include<iostream>
using namespace std;
main()
{
    int min,cost;
    char customer;
    cout<<"enter minutes= ";
    cin>>min;
    string period;
    cout<<"enter period= ";
    cin>>period;
    cout<<" customer type= ";
    cin>>customer;
    if(customer=='r')
    {
    if(min<=50)
    {
        cost=10;
        cout<<cost<<endl;
    }
    else if(min>50)
    {
        cost=(min*0.20)+10;
        cout<<cost<<endl;
    }
    }
   
    if(customer=='p')
    {
    if(min<=75 && period=="day")
    {
        cost=25;
        cout<<cost<<endl;
    }
    else if(min>75 && period=="day")
    {
        cost=(min*0.10)+25;
        cout<<cost<<endl;
    }
    else if(min<=100 && period=="night")
    {
        cost=25;
        cout<<cost<<endl;
    }
    else if(min>100 && period=="night")
    {
        cost=(min*0.05)+25;
        cout<<cost<<endl;
    }
}
}
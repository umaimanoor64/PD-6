#include<iostream>
using namespace std;
main()
{
    string fruit,day;
    float quantity;
    float price;
    cout<<" fruit name = ";
    cin>>fruit;
    cout<<" day of the week = ";
    cin>>day;
    cout<<" amount of fruit is = ";
    cin>>quantity;
    if(fruit=="banana" && (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
      price=quantity*2.50;
      cout<<price<<endl;
    }
    if(fruit=="apple" && (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        price=quantity*1.20;
        cout<<price<<endl;
    }
    if(fruit=="orange" && (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        price=quantity*0.85;
        cout<<price<<endl;
    }
    if(fruit=="grapefruit" && (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        price=quantity*1.45;
        cout<<price<<endl;
    }
    if(fruit=="kiwi" && (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        price=quantity*2.70;
        cout<<price<<endl;
    }
    if(fruit=="pineaple" && (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        price=quantity*5.50;
        cout<<price<<endl;
    }
    if(fruit=="grapes" && (day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday"))
    {
        price=quantity*3.85;
        cout<<price<<endl;
    }
    if(fruit=="banana" && (day=="saturday"||day=="sunday"))
    {
        price=quantity*2.70;
        cout<<price<<endl;
    }
    if(fruit=="apple" && (day=="saturday"||day=="sunday"))
    {
        price=quantity*1.25;
        cout<<price<<endl;
    }
    if(fruit=="orange" && (day=="saturday"||day=="sunday"))
    {
        price=quantity*0.90;
        cout<<price<<endl;
    }
    if(fruit=="grapefruit" && (day=="saturday"||day=="sunday"))
    {
        price=quantity*1.60;
        cout<<price<<endl;
    }
    if(fruit=="kiwi" && (day=="saturday"||day=="sunday"))
    {
        price=quantity*3.00;
        cout<<price<<endl;
    }
    if(fruit=="pineaple" && (day=="saturday"||day=="sunday"))
    {
        price=quantity*5.60;
        cout<<price<<endl;
    }
    if(fruit=="grapes" && (day=="saturday"||day=="sunday"))
    {
        price=quantity*4.20;
        cout<<price<<endl;
    }
    else
    {
        cout<<"error"<<endl;
    }
    

}
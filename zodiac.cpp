#include<iostream>
using namespace std;
main()
{
    int date;
    string month;
    cout<<"enter date= ";
    cin>>date;
    cout<<"enter month= ";
    cin>>month;
    if((month=="march" && date<=21)||(month=="april" && date>=19))
    {
        cout<<"aries"<<endl;
    }
    else if((month=="april" && date>=20)||(month=="may" && date<=20))
    {
        cout<<"taurus"<<endl;
    }
     else if((month=="may" && date>=21)||(month=="june" && date<=20))
    {
        cout<<"gemini"<<endl;
    }
    else if((month=="june" && date>=21)||(month=="july" && date<=22))
    {
        cout<<"cancer"<<endl;
    }
    else if((month=="july" && date>=23)||(month=="august" && date<=22))
     {
        cout<<"leo"<<endl;
     }
    else if((month=="august" && date>=23)||(month=="september" && date<=22))
     {
        cout<<"virgo"<<endl;
     }
    else if((month=="september" && date>=23)||(month=="october" && date<=22))
     {
        cout<<"lobra"<<endl;
     }
    else if((month=="october" && date>=23)||(month=="november" && date<=22))
     {
        cout<<"scorpio"<<endl;
     }
    else if((month=="november" && date>=22)||(month=="december" && date<=21))
     {
        cout<<"sagittarius"<<endl;
     }
    else if((month=="december" && date>=22)||(month=="january" && date<=19))
     {
        cout<<"capricon"<<endl;
     }
    else if((month=="january" && date>=20)||(month=="febraury" && date<=18))
     {
        cout<<"aquarius"<<endl;
     }
    else if((month=="febraury" && date>=19)||(month=="march" && date<=20))
     {
        cout<<"pisces"<<endl;
     }



}
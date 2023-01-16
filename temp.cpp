#include<iostream>
using namespace std;
main()
{
    string temp,hum;
    cout<<"enter temperature= ";
    cin>>temp;
    cout<<"enter humidity= ";
    cin>>hum;
    if(temp=="warm" && hum=="dry")
    {
        cout<<"play tenis"<<endl;
    }
    else if(temp=="warm" && hum=="humid")
    {
        cout<<"swim"<<endl;
    }
    else if(temp=="cold" && hum=="dry")
    {
        cout<<"play basketball"<<endl;
    }
    else if(temp=="cold" && hum=="humid")
    {
        cout<<"watch tv"<<endl;
    }
}

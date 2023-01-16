#include<iostream>
using namespace std;
main()
{
    int x,y, h;
    cout<<"enetr height= ";
    cin>>h;
    cout<<"enter x coordinate= ";
    cin>>x;
    cout<<"enter y coordinate= ";
    cin>>y;
    if((x>=0 && x<=3) && (y==0))
    {
      cout<<"border"<<endl;
    }
    else if((x>=0 && x<=h) && (y==h))
    {
        cout<<"border"<<endl;
    }
    else if((x>=2 && x<=3 * h) && (y==h))
    {
        cout<<"border"<<endl;
    }
    else if((x==h && (y>=h && y<=4 * h)))
    {
        cout<<"border"<<endl;
    }
    else if(x==2 * h && (y>=h && y<=4 * h))
    {
        cout<<"border"<<endl;
    }
    else if(x==0 && (y>=0 && y<=h))
    {
        cout<<"border"<<endl;
    }
    else if(x==3 * h && (y>=0 && y<=h))
    {
        cout<<"border"<<endl;
    }
    else if(x>=h && x<=2 * h && y==4 * h)
    {
        cout<<"border"<<endl;
    }
    else if((x<=0 || x > 3 *h))
    {
        cout<<"outside"<<endl;
    }
    else if((x < h ) && (y > h ))
    {
        cout<<"outside"<<endl;
    }
    else if((x>2 * h) && (y>h))
    {
        cout<<"outside"<<endl;
    }
    else if(y < 0 || y > 4 * h)
    {
        cout<<"outside"<<endl;
    }
    else 
    {
        cout<<"inside"<<endl;
    }
}    
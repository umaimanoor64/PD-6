#include<iostream>
using namespace std;
void comment( int startingtimeH, int startingtimeM, int arrivaltimeH, int arrivaltimeM);

main()
{
    int startingtimeH,startingtimeM,arrivaltimeH,arrivaltimeM;
    cout<<"enetr exam starting time in hours= ";
    cin>>startingtimeH;
    cout<<"enter exam starting time in minutes= ";
    cin>>startingtimeM;
    cout<<"enter arrival hour of student= ";
    cin>>arrivaltimeH;
    cout<<"enter arrival minutes of student= ";
    cin>>arrivaltimeM;

    comment(startingtimeH,startingtimeM,arrivaltimeH,arrivaltimeM);

}
void comment( int startingtimeH, int startingtimeM, int arrivaltimeH, int arrivaltimeM)
{
    int startingtimeHtoM = startingtimeH * 60;
    int totalSmin = startingtimeHtoM + startingtimeM;
    int arrivaltimeHtoM = arrivaltimeH * 60;
    int totalAmin = arrivaltimeHtoM + arrivaltimeM;
    int timebefore = totalSmin - 30;
    int result, minutes , hours;

    if(totalAmin >totalSmin)
    {
        cout<<"late"<<endl;
        result = totalAmin - totalSmin;
        minutes = result % 60;
        hours = result/60;
        cout<<hours<<":"<<minutes<<" time after the start."<<endl;
    }
        
    else if( totalAmin >= timebefore && totalAmin < totalSmin)
    {
        cout<<"on time"<<endl;
        result = totalSmin - totalAmin;
        minutes = result % 60;
        hours = result/60;
        cout<<hours<<":"<<minutes<<" time before the start."<<endl;
    }
    else if(totalAmin < timebefore)
    {
        cout<<"early"<<endl;
        result = totalSmin - totalAmin;
        minutes = result % 60;
        hours = result/60;
        cout<<hours<<":"<<minutes<<" time before the start."<<endl;
    }
}

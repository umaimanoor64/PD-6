#include<iostream>
using namespace std;
float multiplyA(string month, float  stays);
float multiplyS(string month, float  stays);
float discountA( string month, float staydays, float result1);
float discountS( string month, float staydays, float result2);
main(

)
{
    string month;
    float staydays;
    cout<<"enter month= ";
    cin>>month;
    cout<<"enter staydays= ";
    cin>>staydays;

    float result1=multiplyA(month,staydays);
    float result2=multiplyS(month,staydays);
    float result3=discountA(month,staydays,result1);
    float result4=discountS(month,staydays,result2);
    cout<<"appartment= "<<result3<<endl;
    cout<<"studio= "<<result4<<endl;
}
float multiplyA(string month, float  staydays)
{
    float totalBillA;
    if((month =="may" || month =="october") && staydays > 7)
    {
        totalBillA=staydays*65;
    }
    else if((month =="may" || month =="october") && staydays > 14)
    {
        totalBillA= staydays*65;
    }
    else if((month =="june" || month =="september") && staydays >= 14)
    {
        totalBillA=staydays*68.70;
    }
    else if((month =="june" || month =="september") && staydays < 14)
    {
        totalBillA=staydays*68.70;
    }
    else if(month =="july" || month =="august")
    {
        totalBillA=staydays*77;
    }
    return totalBillA;
}
float multiplyS(string month, float  staydays)
{
    float totalBillS;
    if((month =="may" || month =="october") && staydays > 7)
    {
        totalBillS=staydays*50;
    }
    else if((month =="may" || month =="october") && staydays > 14)
    {
        totalBillS= staydays*50;
    }
    else if((month =="june" || month =="september") && staydays >= 14)
    {
        totalBillS=staydays*75.20;
    }
    else if((month =="june" || month =="september") && staydays < 14)
    {
        totalBillS=staydays*75.20;
    }
    else if(month =="july" || month =="august")
    {
        totalBillS=staydays*76;
    }
    return totalBillS;
}
float discountA( string month, float staydays, float result1)
{
    float callA=result1;
    if(staydays>14)
    {
       callA=(result1-(result1*10.0)/100);
    }
    return callA;
}
float discountS( string month, float staydays, float result2)
{
    float callS=result2;
     if((month =="may" || month =="october") && staydays > 7)
     {
        callS=(result2-(result2*5.0)/100);
     }
     else if((month =="may" || month =="october") && staydays > 14)
     {
        callS=(result2-(result2*30.0)/100);
     }
      else if((month =="june" || month =="september") && staydays > 14)
      {
        callS=(result2-(result2*20)/100);
      }
      return callS;
}



    

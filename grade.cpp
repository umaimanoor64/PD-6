#include<iostream>
using namespace std;
main()
{
    string name;
    int eng,math,chem,sci,bio,totalmarks,obtmarks;
    float per;
    string grade;
    cout<<"enter name  ";
    cin>>name;
    cout<<"english marks= ";
    cin>>eng;
    cout<<"math  marks = ";
    cin>>math;
    cout<<"chemistry marks= ";
    cin>>chem;
    cout<<"social science marks = ";
    cin>>sci;
    cout<<"biology marks = ";
    cin>>bio;
    obtmarks=eng+bio+math+chem+sci;
    per=(obtmarks*100)/500;

    if(per<40)
    {
        grade="F";
       cout<<"grade is "<<grade<<endl;
    }
    if(per>=40 && per<50)
    {
        grade="D";
        cout<<"grade is "<<grade<<endl;
    }
    if(per>=50 && per<60)
    {
         grade="C";
        cout<<"grade is "<<grade<<endl;
    }
    if(per>=60 && per<70)
    {
         grade="B";
        cout<<"grade is "<<grade<<endl;
    }
    if(per>=70 && per<80)
    {
         grade="B+";
        cout<<"grade is "<<grade<<endl;
    }    
    if(per>=80 && per<90)
    {
         grade="A";
        cout<<"grade is "<<grade<<endl;
    }
    if(per>=90 && per<=100)
    {
        grade="A+";
        cout<<"grade is "<<grade<<endl;
    }
    cout<<"name of student is = "<<name<<endl;
    cout<<"marks of students are = "<<obtmarks<<endl;
    cout<<"percentage is = "<<per<<endl;
}
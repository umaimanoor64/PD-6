#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoXY(int x, int y);
void clear(int x,int y, char previous);
void showPacman(int x, int y);
void showGhost(int x,int y);
char getcharAtXY(short int x,short int y);
main()
{
int gx = 1;
int gy = 1;
string direction = "right";
char previouschar = ' ';
system("cls");
printmaze();
showGhost(gx , gy);
while(true)
{
    Sleep(100);
    if(direction == "right")
    {
        char nextlocation = getcharAtXY(gx + 1, gy);
        if(nextlocation == '%')
        {
            direction = "left";
        }
        else if(nextlocation ==' ' || nextlocation == '.')
        {
            clear(gx, gy , previouschar);
            gx = gx + 1;
            previouschar = nextlocation;
            showGhost(gx,gy);
        }
    }
    if(direction == "left")
    {
        char nextlocation = getcharAtXY(gx - 1, gy);
        if(nextlocation =='%')
        {
            direction = "right";
        }
        else if(nextlocation == ' ' || nextlocation == '.')
        {
            clear(gx,gy,previouschar);
            gx = gx-1;
            previouschar = nextlocation;
            showGhost(gx,gy);
        }
    }
}
}
void printmaze()
{
    cout<<"%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%               %"<<endl;
    cout<<"%%%%%%%%%%%%%%%%%"<<endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void clear(int x, int y , char previous)
{
    gotoxy(x,y);
    cout<<previous;
}
void showGhost(int x, int y)
{
    gotoxy(x , y);
    cout<<"G";
}
char getcharAtXY(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy ={0,0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
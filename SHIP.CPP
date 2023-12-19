#include<iostream.h>
#include<conio.h>
class ship
{
private:
static int count;
int sno;
char loc[50];
public:
ship():sno(0)
{
count++;
sno=count;
}
void get()
{
cout<<"Enter the locaton of ship: ";
cin>>loc;
}
void show() const
{
cout<<"Total ships are: "<<count<<endl;
cout<<"Your ship's number is: "<<sno<<endl;
cout<<"Your current location is: "<<loc<<endl;
}
};
int ship::count=0;
void main()
{
clrscr();
ship s1,s2,s3,s4;
s1.get();
s1.show();
s2.get();
s2.show();
s3.get();
s3.show();
s4.get();
s4.show();
getch();
}
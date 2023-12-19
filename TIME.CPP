#include<iostream.h>
#include<conio.h>
class time
{
private:
int hours,mints,sec;
public:
time():hours(0),mints(0),sec(0)
{}
time(int x,int y,int z):hours(x),mints(y),sec(z)
{}
time operator- (time);
void display()
{
cout<<"\n"<<hours<<":"<<mints<<":"<<sec<<endl;
}
};
time time::operator- (time t1)
{
time temp;
temp.sec=sec-t1.sec;
if(temp.sec>=60)
{
temp.mints=temp.sec/60;
temp.sec=temp.sec%60;
}
temp.mints+=mints-t1.mints;
if(temp.mints>=60)
{
temp.hours=temp.mints/60;
temp.mints=temp.mints%60;
}
temp.hours-=hours-t1.hours;
return temp;
}
class childtime:public time
{
public:
void operator+(time t)

void main()
{
clrscr();
time Tm;
time t2(2,34,56);
time t4(7,32,29);
Tm=t2.operator- (t4);
t4.display();
t2.display();
Tm.display();
getch();
}

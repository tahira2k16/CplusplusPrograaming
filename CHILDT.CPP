#include<iostream.h>
#include<conio.h>
class time
{
private:
int hr,min,sec;
public:
void show()
{
cout<<"The time is: "<<hr<<"/"<<min<<"/"<<sec<<endl;
}
void get()
{
cout<<"Enter the hours:";
cin>>hr;
cout<<"Enter the mints";
cin>>min;
cout<<"Enter the seconds:";
cin>>sec;
}
time operator+ (time);
};
time time::operator+ (time t1)
{
time temp;
temp.hr=hr+t1.hr;
temp.min=min+t1.min;
temp.sec=sec+t1.sec;
return temp;
}
class childtime:public time
{
};

void main()
{
clrscr();
childtime ct1;
ct1.get();
ct1.show();
getch();
}

#include<iostream.h>
#include<conio.h>
struct date
{
int day,month,year;
};
enum etype{Labour,Secratary,Manager,Accountant,Executive,Researcher};
class emp
{
private:
date doj;
etype title;
public:
void getdata();
void showdata();
};
void emp::getdata()
{
char ch;
cout<<"Enter the date of joining:";
cin>>doj.day>>doj.month>>doj.year;
cout<<"Enter the employee type (use first letter only): ";
cin>>ch;
switch(ch)
{
case 'l':
case 'L':
title=Labour;
break;
case 's':
case 'S':
title=Secratary;
break;
case 'm':
case 'M':
title=Manager;
break;
case 'a':
case 'A':
title=Accountant;
break;
case 'e':
case 'E':
title=Executive;
break;
case 'r':
case 'R':
title=Researcher;
break;
default:
cout<<"Invalid!!";
}
}
void emp::showdata()
{
switch(title)
{
case 0:
cout<<"Labour";
break;
case 1:
cout<<"secratary";
break;
case 2:
cout<<"Manager";
break;
case 3:
cout<<"Accountant";
break;
case 4:
cout<<"Executive";
break;
case 5:
cout<<"Researcher";
break;
}
cout<<"\n The date of joining is :"<<doj.day<<"-"<<doj.month<<"-"<<doj.year<<endl;
}
void main()
{
clrscr();
emp e;
e.getdata();
e.showdata();
getch();
}
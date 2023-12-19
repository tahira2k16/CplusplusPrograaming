#include<iostream.h>
#include<conio.h>
#include<process.h>
class toolbooth{
private:
int noc;
double amount;
public:
toolbooth():noc(0),amount(0.0)
{}
void payingcars()
{
noc++;
amount+=50;
}
void nonpayingcars()
{
noc++;
}
void show()
{
cout<<"The total number of cars passed are: "<<noc<<endl;
cout<<"The total amount collected so far is: "<<amount<<endl;
}
};
void main()
{
clrscr();
toolbooth t1;
int ch;
while(1)
{
cout<<"Prss 1 for paying cars!"<<endl;
cout<<"Press 2 for non paying cars!"<<endl;
cout<<"Press 3 to display the results!"<<endl;
cout<<"Press 4 to exit!"<<endl;
cin>>ch;
switch(ch)
{
case 1:
t1.payingcars();
break;
case 2:
t1.nonpayingcars();
break;
case 3:
t1.show();
break;
case 4:
exit(1);
default:
cout<<"Invalid choice!!";
}
}
getch();}
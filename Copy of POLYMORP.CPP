#include<iostream.h>
#include<conio.h>
class base
{
public:
virtual void show()
{
cout<<"base function"<<endl;
}
};
class child1:public base
{
public:
void show()
{
cout<<"child1 function"<<endl;
}
};
class child2:public base
{
public:
void show()
{
cout<<"child2 function"<<endl;
}
};
void main()
{
clrscr();
base *ptr;
child1 ch1;
child2 ch2;
ptr=&ch1;
ptr->show();
ptr=&ch2;
ptr->show();
getch();
}
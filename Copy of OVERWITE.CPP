#include<iostream.h>
#include<conio.h>
class emp
{
private:
int id;
char name[20];
public:
void get()
{
cout<<"enter the data"<<endl;
cin>>id>>name;
}
void show()
{
cout<<"the data is\n"<<"id:"<<id<<"\n name:"<<name<<endl;
}
};
class teacher:public emp
{
private:
int nop;
char sub1[20],sub2[20],sub3[20];
public:
void get()
{
void emp::get();
cout<<"enter no of periods and subject"<<endl;
cin>>nop>>sub1>>sub2>.sub3;
}
void show()
{
void emp::show();
cout<<"no of periods:"<<nop<<"\n subject:"<<sub1<<","<<sub2<<","<<sub3<<endl;
}
};
class staff:public emp
{
private:
int noh;
char ln[20];
public:
void get()
{
void emp::get();
cout<<"enter no of hours and lab name"<<endl;
cin>>noh>>ln;
}
void show()
{
void emp::show();
cout<<"no of hours:"<<noh<<"\n lab name:"<<ln<<endl;
}
};
class admin:public emp
{
private:
int noh;
char dep;
public:
void get()
{
void emp::get();
cout<<"enter no of hours and department"<<endl;
cin>>noh>>dep;
}
void show()
{
void emp::show();
cout<<"no of hours:"<<noh<<"\n department:"<<dep<<endl;
}
};
void main()
{
clrscr();
teacher ti;
staff s1;
admin a1;
t1.get;
t1.show;
s1.get;
s1.show;
a1.get;
a1.show;
getch();
}









#include<iostream.h>
#include<conio.h>
class emp
{
private:
int id;
protected:
char name[20];
public:
void get()
{
cout<<"enter  the data"<<endl;
cin>>id>>name ;
}
void show()
{
cout<<"the data i s\n"<<"id:"<<id<<"\n name:"<<name<<endl;
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
 emp::get();
cout<<"enter no of periods and  subject"<<endl;
cin>>nop>>sub1>>sub2>>sub3;
}
void show()
{
 emp::show();
cout<<"no of periods:"<<nop<<"\n subj ect:"<<sub1<<","<<sub2<<","<<sub3<<endl;
}
};
class staff:private  emp
{
private:
int noh;
char ln[20];
public:
};
class admin:public emp
{
private:
int noh;
char dep[20];
public:
void get()
{
 emp::get();
cout<<"enter no of hours and department"<<endl;
cin>>noh>>dep;
}
void show()
{
 emp::show();
cout<<"no of hours:"<<noh<<"\n department:"<<dep<<endl;
}
};
void main()
{
clrscr();
teacher t1;
staff s1;
admin a1;
t1.get();
t1.show();
a1.get();
a1.show();
getch();
}





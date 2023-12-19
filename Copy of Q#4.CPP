#include<iostream.h>
#include<conio.h>
class publication2
{
private:
int d,m,y;
float price;
public:
void get()
{
cout<<"enter the date:"<<endl;
cin>>d>>m>>y;
}
void show()
{
cout<<"date is"<<d<<"/"<<m<<"/"<<y<<endl;
}
};
class book :public publication2
{
private:
int page;
public:
void get()
{
 publication2::get();
cout<<"enter pages"<<endl;
cin>>page;
}
void show()
{
 publication2::show();
cout<<"pages:"<<page<<endl;
}

};
class tape :public publication2
{
private:
int playtime;
public:
void get()
{
publication2::get() ;

cout<<"enter play time:"<<endl;
cin>>playtime;
}
void show()
{
 publication2::show();
cout<<"play time is:"<<playtime<<endl;
}

};
void main()
{
clrscr();
book b1;
tape t1;
b1.get();
b1.show();
t1.get();
t1.show();
getch();
}
#include<iostream.h>
#include<conio.h>
class publication
{
private:
char title[30];
float price;
public:
void get()
{
cout<<"enter the title and price:"<<endl;
cin>>title>>price;
}
void show()
{
cout<<"title:"<<title<<"\nprice:"<<price<<endl;
}
};
class book :public publication
{
private:
int page;
public:
void get()
{
publication::get();
cout<<"enter pages"<<endl;
cin>>page;
}
void show()
{
publication::show();
cout<<"pages:"<<page<<endl;
}
};
class tape :public publication
{
private:
int playtime;
public:
void get()
{
publication::get();
cout<<"enter play time:"<<endl;
cin>>playtime;
}
void show()
{
publication::show();
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



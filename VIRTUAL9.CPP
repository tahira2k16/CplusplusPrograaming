#include<iostream.h>
#include<conio.h>
class publication
{
private:
char title[30];
float price;
public:
virtual void get()
{
cout<<"enter the title and price:"<<endl;
cin>>title>>price;
}
virtual void show()
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
publication::get() ;

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
char ch;
int i=0;
publication *ptr[10];
do
{
cout<<"enter b for book and t for tape:"<<endl;
cin>>ch;
if(ch=='b')
ptr[i]=new book;
else
ptr[i]=new tape;
ptr[i]->get();
ptr[i++]->show();
cout<<"enter y for yes and n for no "<<endl;
cin>>ch;
}
while(ch!='n');
getch();
}
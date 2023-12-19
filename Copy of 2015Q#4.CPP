#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
private:
char name[40];
int age;
public:
person():age(0)
{name[0]='\0';}
person(char n[],int a):age(a){strcpy(name,n);}
void setfield()
{
cout<<"enter name and age"<<endl;
cin>>name>>age;
}
void display()
{
cout<<"name:"<<name<<"\nage"<<age<<endl;
  }
};
class student:public person
{
private:
float cgpa;
public:
student():person(), cgpa(0.0)
{}
student(char n[],int a,float c) :person(n,a),cgpa (c)
 {}
 void setfield()
 {
 person::setfield();
 cout<<"enter cgpa"<<endl;
  cin >>cgpa;
  }
   void display()
    {
    person::display();
   cout <<"cgpa :"<<cgpa<<endl;
    }
    };
void main( )
{
clrscr();
student s;
s.setfield();
s.display();
getch();
    }
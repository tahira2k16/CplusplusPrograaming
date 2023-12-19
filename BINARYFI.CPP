#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
class student
{
private:
char name[40];
int id;
public:
void get()
{
cout<<"enter name and id"<<endl;
cin>>name>>id;
}
void show()
{
cout<<"name:"<<name<<"id"<<id<<endl;
}
};
void main()
{
clrscr();
char ch;
do
{
student s;
ofstream out("c:\\abc.txt",ios::binary);
s.get();
out.write((char*)&s,sizeof(s));
out.close();
student s1;
ifstream in("c:\\abc.txt",ios::binary);
in.read((char*)&s1,sizeof(s1));
s1.show();
in.close();
cout<<"do you want more"<<endl;
cin>>ch;
}
while(ch=='y');
getch();
}
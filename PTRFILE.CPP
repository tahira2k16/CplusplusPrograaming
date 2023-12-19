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
cout<<"name:"<<name<<"\nid:"<<id<<endl;
}
};
void main()
{
clrscr();
char ch;
int i=0;
student *ptr[10];
do
{
cout<<"enter s for student"<<endl;
cin>>ch;
if(ch=='s')
ptr[i]=new student;
else
exit(1);
ofstream out("c:\\abc.txt",ios::binary);
ptr[i++]->get();
out.write((char*)ptr,sizeof(ptr));
out.close();
ifstream in("c:\\abc.txt",ios::binary);
in.read((char*)ptr,sizeof(ptr));
ptr[i]->show();
in.close();
cout<<"do you want more enter y/n"<<endl;
cin>>ch;
}
while(ch!='n');
getch();
}
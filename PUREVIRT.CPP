#include<iostream.h>
#include<conio.h>
class student
{
private:
char n[20];
char d[20];
int m;
int t;
public:
student():m(0),t(0)
{n[0]='\0';d[0]='\0';}
void get()
{
cout<<"enter name,department,marks,total"<<endl;
cin>>n>>d>>m>>t;
}
void show()
{
cout<<"name:"<<n<<"\ndepartment:"<<d<<"\nmarks:"<<m<<"\ntotal:"<<t<<endl;
}
float avg()
{
float p;
return p=m/t*100;
}
};
class g:public student
{
private:
char tit[40],fa[40],a[40];
public:
g():student()
{tit[0]='\0';
fa[0]='\0';
a[0]='\0';}
void get()
{
student::get();
cout<<"enter thesis title,faculity advisor and area of research"<<endl;
cin>>tit>>fa>>a;
}
void show()
{
student::show();
cout<<"thesis title:"<<tit<<"\nfaculity advisor:"<<fa<<"\narea:"<<a<<endl;
}
char cg()
{
float per=student::avg();
char g;
if(per>=90)
return g='A';
else if(per>=70&&per<90)
return g='B';
else if(per>=60&&per<70)
return g='C';
else
return g='F';
}
};
class ug:public student
{
private:
char pt[40],ps[40];
public:
ug():student()
{
pt[0]='\0';
ps[0]='\0';
}
void get()
{
student::get();
cout<<"enter project title and project supervisor"<<endl;
cin>>pt>>ps;
}
void show()
{
student::show();
cout<<"project title:"<<pt<<"\nproject supervisor:"<<ps<<endl;
}
char cg()
{
char g;
float per= student::avg();
if(per>=80)
return g='A';
else if(per>=65&&per<80)
return g='B';
else if(per>=50&&per<65)
return g='C';
else
return g='F';
}
};


void main()
{
g g1;
ug ug1;
ug1.get();
ug1.show();
g1.get();
g1.show();
cout<<"under graduate grade:"<<ug1.cg()<<endl;
cout<<"graduate grade:"<<g1.cg()<<endl;
getch();
}


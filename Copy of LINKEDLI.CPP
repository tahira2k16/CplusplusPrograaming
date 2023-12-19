#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
int d;
node *p;
};
class list
{
private:
node *s,*c,*t;
public:
list(){s=NULL;}
void cl(int n)
{
if(s==NULL)
{
t=new node;
t->d=n;
t->p=NULL;
s=t;
}
else
{
c=s;
while(c->p!=NULL)
c=c->p;
t=new node;
t->d=n;
t->p=NULL;
c->p=t;
}
}
void pt()
{
c=s;
while(c->p!=NULL)
{
cout<<c->d<<endl;
c=c->p;
}
cout<<c->d;
}

};
void main()
{
clrscr();
list l;
int ch,n;
while(1)
{
cout<<"enter 1 for creat list"<<"/nenter 2 for print"<<"/nenter 3 for exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"enter value"<<endl;
cin>>n;
l.cl(n);
break;
case 2:
l.pt();
break;
case 3:
exit(1);
break;
}
}
getch();
}



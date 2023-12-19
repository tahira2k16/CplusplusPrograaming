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
int cot;
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
cout<<c->d<<endl;
}
void count()
{
c=s;
while(c->p!=NULL)
{
cot++;
c=c->p;
}
cot++;
}
void sort()
{
int temp;
c=t=s;
for(int i=0;i<cot;i++)
for(int j=0;j<cot-i;j++)
{
t=t->p;
if(c->d>t->d)
{
temp=t->d;
t->d=c->d;
c->d=temp;
}
c=c->p;
t=c;
}
}
void del()
{
if(s->p==NULL)
delete s;
else if(s==NULL)
cout<<"linked list is empty"<<endl;
}
};
void main()
{
clrscr();
list l;
int ch,n;
while(1)
{
cout<<"\nenter 1 for creat list"<<"\nenter 2 for print"<<"\nenter 3 for sort"<<"\nenter 4 for exit"<<endl;
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
l.count();
l.sort();
break;
case 4:
exit(1);
}
}
getch();
}
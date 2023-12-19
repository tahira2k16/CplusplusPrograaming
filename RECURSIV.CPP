#include<iostream.h>
#include<conio.h>
struct node
{
int d;
node *l;
node *r;
};
class list
{
private:
node *s,*c,*t;
int top;
public:
list(){s=NULL;}
void create(int);
void preo(void);
void pre(node *s);
};

void list:: create(int x)
{
if(s==NULL)
{
s=new node;
s->d=x;
s->l=NULL;
s->r=NULL;
}
else
{
node *p;
c=s;
while(c!=NULL)
{
if(c->d==x)
{
cout<<"data already exists"<<endl;
return;
}
if(x>c->d)
{
p=c;
c=c->r;
}
else
{
p=c;
c=c->l;
}
t=new node;
t->d=x;
t->l=NULL;
t->r=NULL;
if(p==NULL)
p=t;
else if(p->d>x)
p->l=t;
else
p->r=t;
}
}
void list:: preo()
{
pre(s);
}
void list:: pre(node *s)
{
if(s!=NULL)
{
cout<<s->d<<endl;
pre(s->l);
pre(s->r);
}
}

 main()
{
clrscr();
list obj;
int val,n;
cout<<"enter ten values"<<endl;
for(int i=1;i<=10;i++)
{
cin>>val;
obj.creat(val);
}
obj.preo();
getch();
}
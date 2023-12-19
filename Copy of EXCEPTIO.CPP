#include<iostream.h>
#include<conio.h>
class stack
{
private:
int st[4];
int top;
public:
stack()
{top=-1;}
class exp
{};
void push(int n)
{
if(top>=4)
throw.exp();
st[++top]=n;
}
int pop()
{
if(top<0)
throw.exp();
return st[top--];
}
};
void main()
{
stack s;
try
{
s.pop(2);
}
catch(stack::exp)
{
cout<<"exception occure stack is full or empty"<<endl;
}
getch();
}
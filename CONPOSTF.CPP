#include<iostream.h>
#include<conio.h>
class exp
{
private:
char st[100];
char s[15],ch;
int top;
public:
exp(){top=-1;}
void in()
{
cout<<"enter exp without space"<<endl;
cin>>st;
}
void scan(void);
void push(void);
void pop(void);
};
void main()
{
clrscr();exp s1;
s1.in();
s1.scan();
getch();
}
void exp::scan(void)
{
for(int i=0;s[i]!='\0';i++)
{
ch=s[i];
if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='('||ch==')')
{
if(ch=='(')
push();
else if(s[top]=='(')
push();
else if(ch==')')
pop();
else if((s[top]=='+'||s[top]=='-')&&(ch=='*'||ch=='/'))
push();
else
{
pop();
push();
}
}
else
cout<<ch<<"   ";
}
pop();
}
void exp::push(void)
{
top++;
s[top]=ch;
}
void exp::pop(void)
{
while(top!=-1)
{
if(ch==')')
{
cout<<s[top]<<"  ";
top--;
if(s[top]=='(')
{
top--;
break;
}
}
else
{
cout<<s[top]<<"  ";
top--;
if(s[top]=='(')
break;
}
}
}
#include<iostream.h>
#include<conio.h>
template<class t,class t2>
t2 add(t n1,t2 n2)
{
return n1+n2;
}
void main()
{
int x1=10;
int x2=20;
float l=376.7;
float m=345.8;
cout<<add(x1,x2)<<endl;
cout<<add(l,m)<<endl;
cout<<add(x1,l)<<endl;
getch();
}
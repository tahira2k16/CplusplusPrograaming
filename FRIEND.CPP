#include<iostream.h>
#include<conio.h>
class B;
class A
{
private:
int x;
public:
A():x(10)
{}
friend void test(A,B);
};
class B
{
private:
int y;
public:
B():y(20)
{}
friend void test(A,B);
};
void test(A a,B b)
{
cout<<"sum is:"<<a.x+b.y<<endl;
}
void main()
{
clrscr();
A obj1;
B obj2;
test(obj1,obj2);
getch();
}
#include<iostream.h>
#include<conio.h>
class calculate
{
private:
int a;
public:
calculate():a(1)
{}
void get()
{
cout<<"Enter the value: ";
cin>>a;
}
void show()
{
cout<<"\nThe value is: "<<a;
}
calculate operator + (calculate);
calculate operator - (calculate);
calculate operator * (calculate);
calculate operator / (calculate);
};
calculate calculate:: operator+ (calculate c)
{
calculate temp;
temp.a=a+c.a;
return temp;
}
calculate calculate:: operator- (calculate c)
{
calculate temp;
temp.a=a-c.a;
return temp;
}
calculate calculate:: operator* (calculate c)
{
calculate temp;
temp.a=a*c.a;
return temp;
}
calculate calculate:: operator/ (calculate c)
{
calculate temp;
temp.a=a/c.a;
return temp;
}

void main()
{
clrscr();
calculate c1,c2,c3,c4,c5,c6;
c1.get();
c2.get();
c3=c1 + c2 ;
c4=c1 - c2;
c5=c1 * c2;
c6=c1 / c2;
c3.show();
c4.show();
c5.show();
c6.show();
getch();
}



#include<iostream.h>
#include<conio.h>
class emp
{
private:
static int count;
float salary;
public:
emp():salary(0.0)
{count++;}
void getdata()
{
cout<<"Enter the salary: " ;
cin>>salary;
}
void showdata()
{
cout<<"The total employes are:"<<endl<<count<<endl;
cout<<"The salary is: "<<endl<<salary<<endl;
}
};
int emp::count=0;
void main()
{
clrscr();
emp e1,e2;
e1.getdata();
e1.showdata();
e2.getdata();
e2.showdata();
getch();
}
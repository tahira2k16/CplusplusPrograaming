#include<iostream.h>
#include<conio.h>
class emp
{
private:
int empId;
float salary;
public:
void getdata()
{
cout<<"Enter the ID: ";
cin>>empId;
cout<<"Enetr the salary:";
cin>>salary;
}
void totalsal(emp e1,emp e2,emp e3)
{
float netsalary;
netsalary= e1.salary+e2.salary+e3.salary;
cout<<"The total salary is: "<<netsalary<<endl;
 }
void showdata()
{
cout<<"The ID of employee is: "<<empId<<endl;
cout<<"The salary of employee is: "<<salary<<endl;
}
};
void main()
{
clrscr();
emp e4,e5,e6,e7;
e4.getdata();
e5.getdata();
e6.getdata();
e4.showdata();
e5.showdata();
e6.showdata();
e7.totalsal(e4,e5,e6);
getch();
}


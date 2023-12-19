#include<iostream.h>
#include<conio.h>
class subtract
{
private:
int a[10][10],b[15][5],c[10][5];
int r1,r2,c1,c2;
public:
void get()
{
int i,j;
cout<<"enter no of rows and columns for matrix A"<<endl;
cin>>r1>>c1;
cout<<"enter no of rows and columns for matrix B"<<endl;
cin>>r2>>c2;
if(r1==r2&&c1==c2)
{
cout<<"enter members of matrix a"<<endl;
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
cin>>a[i][j];
}
cout<<"enter members of matrix b"<<endl;
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
cin>>b[i][j];
}
else
cout<<"rows & columns should equal of both matrix"<<endl;
}
void sub()
{
int i,j;
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
c[i][j]=a[i][j]-b[i][j];
}
void show()
{
cout<<"member of matrix are"<<endl;
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
cout<<c[i][j]<<"          ";
cout<<endl;
}}
};
void main()
{
clrscr();
subtract  obj;
obj.get();
obj.sub();
obj.show();
getch();
}
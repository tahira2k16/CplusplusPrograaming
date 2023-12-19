#include<iostream.h>
#include<conio.h>
class arr
{
private:
int a[10];
int n;
public:
void get()
{
cout<<"how many member u want"<<endl;
cin>>n;
cout<<"enter data"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
}
void ins(int l,int v)
{
//cout<<"enter location & value"<<endl;
//cin>>l>>v;
if(l>n)
cout<<"invalid location"<<endl;
else
for(int j=n;j>=l-1;j--)
a[n+1]=a[n];
a[l-1]=v;
}
void show()
{
cout<<"values are"<<endl;
for(int i=0;i<10;i++)
cout<<a[i]<<endl;
}
};
void main()
{
clrscr();
arr obj;
int l,v;
obj.get();
//cout<<"enter location & value"<<endl;
//cin>>l>>v;
obj.ins(5,36);
obj.show();
getch();
}
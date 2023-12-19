#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
class bank
{
private:
int ano;
char aname[40];
protected:
float b;
public:
bank():ano(0),b(0.0){aname[0]='\0';}
bank(int a,char n[],float bl):ano(a),b(bl)
{
strcpy(aname,n);
}
void get()
{
cout<<"enter data"<<endl;
cin>>ano>>aname>>b;
}
void show()
{
cout<<"account no"<<ano<<"\naccount holder name:"<<aname<<"\nbalance:"<<b<<endl;
}
void deposit()
{
float am;
cout<<"enter amount u want to deposit"<<endl;
cin>>am;
b=b+am;
}
virtual void withdraw()=0;
int accountno()
{return ano;
}
char* name()
{
return aname;
}
float balance()
{
return b;
}
};
class check:public bank
{
private:
int noc;
public:
check():bank(),noc(0){}
check(int a,char n[],float bl,int c):bank(a,n,bl),noc(c)
{}
void get()
{
bank::get();
cout<<"enter no of check"<<endl;
cin>>noc;
}
void show()
{
bank::show();
cout<<"no of checks:"<<noc<<endl;
}
void withdraw()
{
//bank::withdraw();
int amount;
cout<<"enter amount u want to withdraw:"<<endl;
cin>>amount;
if(amount<b)
if(b-amount>=5000)
b-=amount;
else
cout<<"ur minimum balance should be 5000"<<endl;
else
cout<<"insufficient balance"<<endl;
}
};
class save:public bank
{
private:
float ir;
public:
save():bank(),ir(0.0){}
save(int a,char n[],float bl,float r):bank(a,n,bl),ir(r)
{}
void get()
{
bank::get();
cout<<"enter intereset rate"<<endl;
cin>>ir;
}
void show()
{
bank::show();
cout<<"intereset rate:"<<ir<<endl;
}
void withdraw()
{
//bank::withdraw();
long int m;
cout<<"enter amount u want to withdraw "<<endl;
cin>>m;
if(m<b)
if(m<=50000)
b-=m;
else
cout<<"not allowed to withdraw more then 50000"<<endl;
else
cout<<"insufficient balance"<<endl;
}
};
void main()
{
clrscr();
fstream file;
file.open("c:\\abc.text",ios::binary);
bank *p[5];
int i=0;
char ch;
do
{
cout<<"enter account type"<<endl;
cin>>ch;
if(ch=='c')
p[i]=new check();
else if(ch=='s')
p[i]=new save();
p[i]->get();
file.write((char*)&p[i],sizeof(p[i]));
i++;
cout<<"do u want more"<<endl;
cin>>ch;
}
while(ch=='y');
int ano;
cout<<"enter account no"<<endl;
cin>>ano;
for(int j=0;j<=i;j++)
{
if(p[j]->accountno()==ano)
p[j]->show();
else
cout<<"record not found"<<endl;
}
getch();
}
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
	      struct  student
	      {char name[50];
	      int rn;
	      };
void main()
{ clrscr();
student n[5];
ofstream out("C:\\qwe.txt",ios::out);//||ios::binary);
for(int i=0;i<5;i++)
{
cout<<"enter value";
cin>>n[i].name>>n[i].rn;
out.write((char*)&n,sizeof(n));
			    }
out.close();
ifstream in("C:\\qwe.txt",ios::in);//||ios::binary);
int m;
while(!in.eof())
{
in.read((char*)&n,sizeof(n));
cout<<n[i].name<<n[i].rn<<"\n";
}
in.close();
getch();
}
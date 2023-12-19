#include<iostream.h>
#include<conio.h>
#include<string.h>
class animal
{
private:
int leg;
public:
animal():leg(0)
{}
animal(int l):leg(l)
{}
virtual void walk()=0;
virtual void eat()=0;
};
class pet
{
private:
char name[30];
public:
pet()
{name[0]='\0';}
pet(char n[])
{strcpy (name,n);}
void setname(char n[])
{
strcpy(name,n);
}
void getname()
{
cout<<name;
}
virtual void play()=0;
};
class spider: public animal
{
public:
spider():animal()
{}
void eat()
{
//animal::eat();
cout<<"spider can eat flies"<<endl;
}
void walk()
{
//animal::walk();
}
};
class cat:public animal,public pet
{
public:
cat():pet()
{}
void play()
{
//pet::play();
cout<<"cats can play with ball"<<endl;
}
void eat()
{
//animal::eat();
cout<<"cats can eat meat and drink milk"<<endl;
}
void walk()
{
//animal::walk();
}
};
class fish:public animal,public pet
{
public:
fish():animal(),pet()
{}
fish(char n[]):pet(n)
{}
void play()
{
//pet::play();
cout<<"fish can paly "<<endl;
}
void eat()
{
//animal::eat();
cout<<"fish can eat"<<endl;
}
void walk()
{
//animal::walk();
cout<<"fish can walk with"<<endl;
}
};
void main()
{
animal *ptra[20];
pet *ptrb[20];
int i=0;
char ch;
do
{
cout<<"enter s/c/f"<<endl;
cin>>ch;
if(ch=='s')
{
ptra[i]=new spider;
ptra[i ++]->eat();
}
if(ch=='c')
{
ptra[i]=new cat;
ptra[i++]->eat();
ptrb[i]=new cat;
ptrb[i++]->play();
}
if (ch=='f' )
{
ptra[i]=new fish;
ptra[i++]->eat ();
ptra[i]=new fish;
ptra[i++]->walk();
ptrb[i]=new fish;
ptrb[i ++]->play ( );
}
cout <<" enter y or n"<<endl;
cin>>ch;
}
while(ch!='n');
getch();
}




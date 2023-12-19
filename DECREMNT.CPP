#include<iostream.h>
#include<conio.h>
class test
{   private:
 int count;
 public:
 test():count(5)
 {}
 void show()
 { cout<<"\n count:"<<count;    }
 void operator --()
 { --count;   }
};
void main()
  { clrscr();
  test t1,t2;
  t1.show();
  t2.show();
   --t1;
   --t2;
   --t2;
   --t2;
   --t1;
   t1.show();
   t2.show();
  getch(); }
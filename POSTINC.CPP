#include<iostream.h>
#include<conio.h>
class test
{   private:
 int count;
 public:
 test():count(1)
 {}
 test(int n):count(n)
 {}
 void show()
 { cout<<"\n count:"<<count;    }
 test operator-- ()
 {
 count--;
 return test(count);
 }
};
void main()
  { clrscr();
  test t1,t2,t3;
  t1.show();
  t2.show();
  t1--;
   t2--;
   t1.show();
   t2.show();
   t3=t1--;
   t3.show();
   t2--;
   t1--;
   t1.show();
   t2.show();
  getch();
  }
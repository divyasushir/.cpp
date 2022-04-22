#include<iostream.h>
#include<conio.h>
class number
{
   int a;
   public:
	  void getdata(int a)
	  {
	      this->a=a;
	  }
	  void show()
	  {
	    cout<<"\naddress of current obj using this ptr"<<this;
	    cout<<"\nA:"<<this->a<<endl;//value of a
	  }
};
void main()
{
   clrscr();
   number m,m1;
   int n;
   cout<<"\nEnter number:";
   cin>>n;
   m.getdata(n);
   m.show();
   cout<<"\nEnternumber:";
   cin>>n;
   m1.getdata(n);
   m1.show();
   getch();
}





































































































































































































































































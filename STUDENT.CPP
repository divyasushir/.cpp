//program to demostrate encapsulation
	     //or
//program to demostrate class and object
#include<iostream.h>
#include<conio.h>
class student
{
   private:
	   int rollno;
	   char sname[20];
	   char sclass[20];
   public:
	  void get();
	  void put();
};
void student::get()
 {
   cout<<"enter roll no :-";
   cin>>rollno;
   cout<<"enter student name :-";
   cin>>sname;
   cout<<"enter class :-";
   cin>>sclass;
 }
void student::put()
 {
  cout<<rollno<<"\t\t"<<sname<<"\t\t"<<sclass<<endl;
 }
void main()
 {
  clrscr();
  student s1,s2;
  s1.get();
  s2.get();
  cout<<"***************************************"<<endl;
  cout<<"Rollno\t\tsName\t\tsClass"<<endl;
  cout<<"***************************************"<<endl;
  s1.put();
  s2.put();
 getch();
 }




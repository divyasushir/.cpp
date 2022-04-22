#include<iostream.h>
#include<conio.h>
class Demo1;
class Demo

{
	private:
		int a;
	public:
	       void get();
		friend void add(Demo s Demo1 s1);
		void show_a();
};
void Demo1
{
  private:
	int b;
  public:
	void get_b();
	void show_b();
	friend void add(demos,demo1,demo1);
};
void demo get_a()
{
cout<<"enter the value of a"<<a<<endl;
cin>>a;
}
void demo get_b()
{
cout<<"enter the value b"<<b<<endl;
}
void demo1::show_a ()
{
cout<<

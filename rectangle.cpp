#include<iostream>
#include<conio.h>


class Rectangle
{
	void rarea()
	{
	int l;
	int b;
	int area;
	cout<<"Enter the value of l:";
	cin>>l;
	cout<<"Enter the value of b:";
	cin>>b;
	area=l*b;
	cout<<"Area of Rectangle:"<<area;
	}
	void rperimeter()
	{
	int l;
	int b;
	int perimeter;
	cout<<"Enter the value of l:";
	cin>>l;
	cout<<"Enter the value of b:";
	cin>>b;
	perimeter=2*l+b;
	}
}
int main()
{
	Rectangle r;
	r.rarea();
	r.perimeter();
}
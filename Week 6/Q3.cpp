#include<iostream>
using namespace std;
int main()
{
	int a,b,*x,*y;
	cout<<"Enter two number: ";
	cin>>a>>b;
	x=&a;
	y=&b;
	cout<<"Address of a: "<<x<<endl;
	cout<<"Address of b: "<<y<<endl;
	return 0;
}

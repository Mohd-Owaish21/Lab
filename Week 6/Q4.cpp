#include<iostream>
using namespace std;
int main()
{
	int a,b,*x,*y;
	cout<<"Enter two number: ";
	cin>>a>>b;
	x=&a;
	y=&b;
	cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
	cout<<"a: "<<*x+1<<endl;
	cout<<"b: "<<*y+1<<endl;
	return 0;
}

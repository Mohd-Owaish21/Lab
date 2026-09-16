#include<iostream>
using namespace std;
int main()
{
	int a,b,*x,*y;
	cout<<"Enter two number: ";
	cin>>a>>b;
	x=&a;
	y=&b;
	int temp=*x;
	*x=*y;
	*y=temp;
	cout<<"Swap number is: "<<a<<" "<<b;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,*x,*y;
	cout<<"Enter two number: ";
	cin>>a>>b;
	x=&a;
	y=&b;
	sum=*x+*y;
	cout<<"Sum of two number is: "<<sum;
	return 0;
}

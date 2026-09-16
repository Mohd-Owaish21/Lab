//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b;
//	cout<<"Enter two number: ";
//	cin>>a>>b;
//	int *ptr1=&a;
//	int *ptr2=&b;
//	cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
//	cout<<"a: "<<(*ptr1)+1<<" "<<"b: "<<(*ptr2)+1<<endl;
//	return 0;
//}

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

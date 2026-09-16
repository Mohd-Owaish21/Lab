#include<iostream>
#include<string>
using namespace std;
int main()
{
	string nm1="Mohd ";
	string nm2="Owaish";
	string *ptr1=&nm1;
	string *ptr2=&nm2;
	cout<<"Name: "<<(*ptr1)+(*ptr2);
	return 0;
}

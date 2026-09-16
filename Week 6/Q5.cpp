#include<iostream>
#include<string>
using namespace std;
int main()
{
	string nm="Owaish";
	string *ptr=&nm;
	cout<<"Name: "<<*ptr;
	return 0;
}

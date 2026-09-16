#include<iostream>
#include<string>
using namespace std;
int main()
{
	char nm[7]="Owaish";
	char *ptr=nm;
	cout<<ptr;
	ptr=nm+strlen(nm)-1;
	while(ptr>=nm)
	{
		cout<<ptr;
		nm--;
	}
	return 0;
}

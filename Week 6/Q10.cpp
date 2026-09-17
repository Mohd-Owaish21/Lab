#include<iostream>
#include<string>
using namespace std;
int main()
{
	char nm[10];
	char *ptr=nm;
	cin>>nm;
	int i=0;
	while(*(ptr+i)!='\0')
	{
		i++;
	}
	while(i>=0)
	{
		cout<<*(ptr+i);
		i--;
	}
	return 0;
}

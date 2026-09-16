#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int *ptr=arr;
	for(int i=0;i<10;i++)
	{
		*(ptr+i)=i;
		cout<<(*ptr+i)<<" ";
	}
	return 0;
}

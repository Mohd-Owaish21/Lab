#include<iostream>
using namespace std;
int main()
{
	int n,arr[n];
	int *ptr=arr;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the elements: ";
		cin>>*(ptr+i);
	}
	for(int i=0;i<n;i++)
	{
		cout<<"Display: "<<arr[i]<<" ";
	}
	return 0;
}

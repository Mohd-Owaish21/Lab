#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],sum=0;
	int *ptr=arr;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the elements: ";
		cin>>*(ptr+i);
		sum=sum+*(ptr+i);
	}
	cout<<"Sum: "<<sum;
	return 0;
}

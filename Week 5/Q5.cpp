#include<iostream>
using namespace std;
int main(){
	int n,a[n];
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Reverse of array is: ";
	for(int i=n-1;i>=0;i--)
	{
		cout<<"  "<<a[i];
	}
	return 0;
}

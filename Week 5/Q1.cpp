#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of elements ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Element"<<i+1<<": ";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<"Element in the array are: "<<arr[i]<<endl;
	}
	return 0;
}

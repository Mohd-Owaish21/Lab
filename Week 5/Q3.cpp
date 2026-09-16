#include<iostream>
using namespace std;
int main(){
	int n,len=0;
	cout<<"Enter the number of elements ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Element "<<i+1<<": ";
		cin>>arr[i];
	}
	len=sizeof(arr)/sizeof(arr[0]);
	cout<<"Length of Array Element is: "<<len;
	return 0;
}

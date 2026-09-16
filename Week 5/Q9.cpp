#include<iostream>
using namespace std;
int main(){
	int a[100],n,num,count=0;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter no. to find frequency: ";
	cin>>num;
	for(int i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			count++;
		}
	}
	cout<<"Frequency of "<<num<<" = "<<count;
	return 0;
}

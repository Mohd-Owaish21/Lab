#include<iostream>
using namespace std;
int main(){
	int n,a[n],positive=0,negative=0,odd=0,even=0;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Positive Number ";
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			cout<<a[i]<<" ";
			positive++;
			cout<<endl;
		}
	}
	cout<<"Negative Number ";
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i]<<" ";
			negative++;
			cout<<endl;
		}
	}
	cout<<"Even Number ";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<" ";
			even++;
			cout<<endl;
		}
	}
	cout<<"Odd Number ";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			cout<<a[i]<<" ";
			odd++;
			cout<<endl;
		}
	}
	cout<<"Positive No. "<<positive<<endl;
	cout<<"Negative No. "<<negative<<endl;
	cout<<"Even No. "<<even<<endl;
	cout<<"Odd No. "<<odd<<endl;
	return 0;
}

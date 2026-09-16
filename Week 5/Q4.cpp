#include<iostream>
using namespace std;
int main(){
	int n,a[n],lar=a[0],sec_lar=a[0];
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>lar)
		{
			lar=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>sec_lar&&a[i]<lar)
		{
			sec_lar=a[i];
		}
	}
	cout<<"Second largest no. is "<<sec_lar;
	return 0;
}

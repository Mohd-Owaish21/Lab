#include<iostream>
using namespace std;
int main(){
	int a[100],b[100],c[200],n1,n2,i=0,j=0,k=0;
	cout<<"Enter the no. of elements: ";
	cin>>n1;
	cout<<"Enter elements: ";
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the no. of elements: ";
	cin>>n2;
	cout<<"Enter elements: ";
	for(int j=0;j<n2;j++)
	{
		cin>>b[j];
	}
	while(i<n1&&j<n2)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		c[k]=a[i];
		i++,k++;
	}
	while(j<n2)
	{
		c[k]=b[j];
		j++,k++;
	}
	cout<<"Merge Array: ";
	for(int i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int a[10][10],b[10][10],sum[10][10],mul[10][10],r1,c1,r2,c2;
	cout<<"No. of elements in 1st matrix: ";
	cin>>r1>>c1;
	cout<<"No. of elements in 2nd matrix: ";
	cin>>r2>>c2;
	cout<<"Enter the value of 1st matrix: ";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the value of 2nd matrix: ";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
	}
	if(r1==r2&&c1==c2)
	{
		cout<<"Addition of matrix "<<endl;
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				sum[i][j]=a[i][j]+b[i][j];
				cout<<sum[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	if(c1==r2)
	{
		cout<<"Multiplication of matrix "<<endl;
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				mul[i][j]=0;
				for(int k=0;k<c1;k++)
				{
					mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
//					cout<<"a["<<i<<"]["<<k<<"] "<<a[i][k]<<"  ";
//					cout<<"b["<<k<<"]["<<j<<"] "<<b[k][j]<<endl;
//					
//					cout<<"a[i][k] "<<a[i][k]<<"  ";
//					cout<<"b[k][j] "<<b[k][j]<<endl;
				}
				cout<<mul[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

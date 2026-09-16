#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number ";
	cin>>n;  //5
	cout<<"Prime Number ";
	for(int i=2;i<=n;i++)  //4<=5,
	{
		int count=0;
		for(int j=1;j<=i;j++)  //1<=3
		{
			if(i%j==0)  //(2%1==0,2%2==0)(3%1==0,3%2==1,3%3==0)(4%1==0,4%2==0,4%3==1,4%4==0)(5%1==0,5%2==1,5%3==2,5%4==1,5%5==0)
			{
				count++;  //(2)
			}
		}
		if(count==2) //(for 2=2, 3=2, 4=3, 5=2)
		{
			cout<<i<<" ";  //2,
		}
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n,orig_n,rem,res=0;
	cout<<"Enter the number ";
	cin>>n;  //153
	orig_n=n;  //153
	while(orig_n>0)  //153>0
	{
		rem = orig_n%10;  //153%10=3, 15%10=5, 1%10=1
		res=res+(rem*rem*rem);  //0+(27)=27, 27+(125)=152, 152+(1)=153
		orig_n=orig_n/10;  //153/10=15, 15/10=1, 1/10=0
	}
	if(n==res)  //153==153
	{
		cout<<n<<" is an Armstrong Number";
	}
	else
	{
		cout<<n<<" is not an Armstrong Number";
	}
	return 0;
}

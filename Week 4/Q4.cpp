#include<iostream>
using namespace std;
int main(){
	int n,t1=0,t2=1,next_t=0;
	cout<<"Enter the number of terms ";
	cin>>n;
	cout<<"Fibonacci Sequence ";
	for(int i=0;i<n;i++)  //5
	{
		cout<<t1<<" "; //0,1,1,2,3
		next_t=t1+t2;  //1,2,3,5,8
		t1=t2;  //1,1,2,3,5
		t2=next_t;  //1,2,3,5,8
	}
	return 0;
}

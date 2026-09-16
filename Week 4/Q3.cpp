#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,result;
	cout<<"Enter the values ";
	cin>> a >> b >> c >> d >> e >> f >> g;
	result = ((a + b / c * d - e) * (f - g));
	cout<<"Arithmetic Expression is "<< result;
	return 0;
}

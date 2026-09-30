#include<iostream>
#include<string>
using namespace std;
string insertion(string given, string insert, int pos)
{
	string res="";
	res=res+given;
	for(int i=0;i<pos;i++)
	{
		res=res[pos]+insert;
	}
	return res;
};
int main()
{
	string res= insertion("My name is ", "Mohd Owaish", 11);
	cout<<res;
	return 0;
}

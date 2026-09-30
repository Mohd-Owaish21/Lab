#include<iostream>
using namespace std;
class ptr_obj
{
	int roll_no;
	string name;
public:
	set_data(int r, string n)
	{
		roll_no=r;
		name=n;
	}
	print()
	{
		cout<<"Roll No: "<<this->roll_no<<endl;
		cout<<"Name: "<<this->name<<endl;
	}
};
int main()
{
	ptr_obj aa,bb,cc;
	aa.set_data(1,"Owaish");
	bb.set_data(2,"Danish");
	cc.set_data(3,"Zaid");
	aa.print();
	bb.print();
	cc.print();
	return 0;
}

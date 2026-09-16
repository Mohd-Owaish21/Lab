#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter the character ";
	cin>>ch;
	int category=0;
	if(ch>=65 && ch<=90){
		category=1;
	}
	else if(ch>=97 && ch<=122){
		category=2;
	}
	else if(ch>=48 && ch<=57){
		category=3;
	}
	else{
		category=4;
	}
	switch(category){
		case 1: cout<<"Capital Letter "<<endl;
		break;
		case 2: cout<<"Small Letter "<<endl;
		break;
		case 3: cout<<"Digit "<<endl;
		break;
		case 4: cout<<"Special Symbol "<<endl;
		break;
	}
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	string b;
	string c;
	//int a;
	//int b;
	//int c;
	
	//cin>>a;
	getline(cin,a);
	
	cout<<"Your full name is: "<<a<<endl;
	
	string c;
	
	c=a+b;
	
	cout<<"The combined word is: "<<c;
	cout<<"the length of the combined name is "<<c.length();
	return 0;
}

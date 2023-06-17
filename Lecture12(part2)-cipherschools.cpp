#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	
	int *p;
	int *q;
	
	
	p=&a;
	q=&b;
	
	a=2;
	b=5;
	
	c=*p+*q;
	p+1;
	q+2;
	
	//cout<<"The value of a is (from the actual variable type) "<<a<<endl;
	//cout<<"The value of a from the pointer using *(astreix/ indirection operator) "<<*p<<endl;
	
	cout<<"the value of c is :"<<c<<endl;
	
	cout<<"The address of a is "<<&a<<"The value of pointer is "<<p;
	
	return 0;
}

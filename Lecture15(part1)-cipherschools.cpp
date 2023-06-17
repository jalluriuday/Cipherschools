#include<iostream>
using namespace std;

int main()
{
	//char v,i,n,e,s,h;
	
	//cin>>v>>i>>n>>e>>s>>h;
	char name[6];
	int i;
	
	for(i=0;i<6;i++)
	{
		cin>>name[i];
	}
	
	cout<<"The name you have just entered is "<<endl;
	
	for(i=0;i<6;i++)
	{
		cout<<name[i];
	}
}

#include<iostream>
using namespace std;
int main()
{

	int *p;
	int a=10;
	p=&a;

	int &ref=a;
int b=100;
	ref=b;
	
	cout<<&ref<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	cout<<&b<<endl;

	cout<<a<<endl;

}


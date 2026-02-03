#include<iostream>
using namespace std;
static int j=90;
double d;
void fun()
{
	int f_locl=20;
	
	cout<<"data func stack  "<<f_locl<<"   "<<"adress fun local "<<"  "<<&f_locl<<endl;

}

int main()
{
	int i=10;
//	char ch;
	static float ch=90;

	int *ptr=new int(10);

	cout<<"data local i "<<i<<"   "<<"local stack adress"<<"  "<<&i<<endl;

	cout<<"data ch "<<ch<<"   "<<"adress static local "<<"  "<<(&ch)<<endl;
	cout<<"data  gobal j "<<j<<"   "<<"adress of gobal static  j "<<"  "<<&j<<endl;
	cout<<"data uninit d "<<d<<"   "<<"adress gobal var d"<<"  "<<&d<<endl;
	cout<<"data of local pointer  "<<*ptr<<"   "<<"adress of ptr heap"<<"  "<<ptr<<endl;

	fun();
}



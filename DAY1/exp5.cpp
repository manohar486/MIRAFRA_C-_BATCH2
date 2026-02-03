#include<iostream>
using namespace std;
void fun(int &);
int main()
{
	int n=10;

	cout<<n<<"    "<<&n<<endl;
	fun(n);

	cout<<n<<"    "<<&n<<endl;
}

void fun(int &num)
{
	num*=10;

	cout<<num<<"     "<<&num<<endl;

}



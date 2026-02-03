#include<iostream>
using namespace std;
void fun(const int &);
int main()
{
	int n=10;

	cout<<n<<"    "<<&n<<endl;
       fun(n);
        
//	cout<<n<<"    "<<&n<<endl;
//	cout<<l_ref<<"    "<<&l_ref<<endl;
}

void   fun(const int &num)
{
//num*=2; error

	cout<<num<<"    "<<&num<<endl;



}



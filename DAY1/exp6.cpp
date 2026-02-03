#include<iostream>
using namespace std;
int & fun(int &);
int main()
{
	int n=10;

	cout<<n<<"    "<<&n<<endl;
       int l_ref=fun(n);
        
//	cout<<n<<"    "<<&n<<endl;
	cout<<l_ref<<"    "<<&l_ref<<endl;
}

int&  fun(int &num)
{
	num*=10;
      static int j=100;
//	cout<<num<<"     "<<&num<<endl;
         int &r=j;
     cout<<&j<<"   "<<&r<<endl;

	 return j;
}



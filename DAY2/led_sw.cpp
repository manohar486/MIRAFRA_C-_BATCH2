#include<iostream>
using namespace std;
class LedSw
{
   bool i,j;

	public:
   LedSw(bool k=false,bool m=false):i(k),j(m){}

   void operator()()
   {
	   cout<<"led & sw  status\n";
	   if(i && j)
		   cout<<"both sw and led is on state\n";
	   else if(i && j==false)
		   cout<<"only led is on\n";
	   else if(i==false  && j)
		   cout<<"only sw is on state\n";
	   else
		   cout<<"both is off state\n";

   }

   void operator() (bool m ,bool n)
   {
	   i=m,j=n;

	  if(i)
		  cout<<"led is on\n";
	  else
		  cout<<"led is off\n";

	  if(j)
		  cout<<"sw is on\n";
	  else
		  cout<<"sw is off\n";

   }

};


int main()
{

	LedSw f;

	f(true,true);
	f(false,true);
	f();

}


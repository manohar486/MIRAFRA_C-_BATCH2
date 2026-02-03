#include<iostream>
using namespace std;

int main()
{
	int var=10;
         int k=90;
/*const	int *p=&var;
p=20;   for we cont change or modufy value only addrs can change*/


/*int const *p=&var;
 
  *p=10;
  p=&k;
  we can't modify adrees only intionsation only then not possible
   but we can can data any time 
 
   */

/*const int const *p=&var;
 *p=90;p=&k;
 both data and adress we can't change*/


cout<<var<<*p<<endl;

}

#include<iostream>
#include<memory>
using namespace std;
class Led
{
	bool l;
	public:
	Led(bool i=false):l(i){}

      void  operator ()(bool k)const
	{
		if(l)
			cout<<"its alredy in on state\n";
		else if(k)
			cout<<" now led is on state\n";

//		return l;
	}


    //  void opeartor

};

int main()
{
	Led led(true);

	led(false);
}

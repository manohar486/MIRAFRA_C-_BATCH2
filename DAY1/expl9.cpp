#include<iostream>
using namespace std;

class LED
{

	bool i;
	public:
	LED(bool j=1):i(j){
	}

	void led_on()
	{
		i=true;
	}

	void led_off( )
	{
		i=false;
	}

	void display()const{

		if(i)
			cout<<"led is on"<<endl;
		else
			cout<<"led is off"<<endl;

	}

	void toggle(){
		i^=1;
	}      

};

int main()
{
	LED obj;
	//obj.led_on();
//	obj.led_off();
	obj.display();

}







#include<iostream>
using namespace std;
class add
{
	int i,j;
	public:
	add(int x=0,int y=0):i(x),j(y){}

	add(const add&obj)
	{
		i=obj.i;
		j=obj.j;
	}

	add operator +(const add&obj)
	{
		i+=obj.i;
		j+=obj.j;

		return *this;
	}

	void display()const
	{
		cout<<i<<"i"<<"+"<<j<<"j"<<endl;
	}


};

int main()
{
	add obj(10,20),obj2(100,200);

	obj.display();
	obj2.display();

	add obj3=obj+obj2;

	obj3.display();

}





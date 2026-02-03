#include<iostream>
#include<memory>
using namespace std;

class sensor
{
	int d;
	public:
	sensor(int i=0):d(i)
	{
		cout<<"sensor construtor\n";
	}


	~sensor()
	{
		cout<<"sensor deleted\n";
	}


	void display()const
	{
		cout<<"sensor data  "<<d<<endl;
	}

	void modify(int k)
	{
		d=k;
	}

};

void fun()
{

	unique_ptr<sensor>p=make_unique<sensor>(90);// create a unique pointer and pointing to an object
        
	p->display();

	unique_ptr<sensor>q=move(p);// move the ownership
				   
	if(!p)
		cout<<"prev one is null P  "<<endl;

//      sensor *temp=q.release();
  //    cout<<temp<<"its realse adress\n";

//	cout<<"move ownership\n"<<endl;
//	temp->display();


	sensor *temp=q.get();

	temp->modify(100);

	temp->display();

	q->display();



}

int main()
{

	fun();

}


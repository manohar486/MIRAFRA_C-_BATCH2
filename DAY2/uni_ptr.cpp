#include<iostream>
using namespace std;
template<typename type>

class UniquePtr
{

type *ptr;

	public:
explicit UniquePtr(type *T=nullptr):ptr(T){

	cout<<"UNique_ptr constructor is called\n";
}


~UniquePtr()
{

	cout<<"uniqueptr is deletede\n";
	delete ptr;
}


UniquePtr(const UniquePtr &obj)=delete;// no copy is called
UniquePtr& operator=(const UniquePtr)=delete;// no copy assignment
					    



//move const

/*UniquePtr( UniquePtr&&obj)
{
        ptr=obj.ptr;
	obj.ptr=nullptr;
}*/


/*UniquePtr& operator=(UniquePtr&&obj)
{

	if(this!=obj)
	{
         ptr=obj.ptr;
	 obj.ptr=nullptr;
	}

	return *this;
}*/




type* realse()
{
	type *temp=ptr;
	ptr=nullptr;

	return temp;
}

void reset(type *p=nullptr)
{
        delete ptr;

	cout<<"reset the object\n";
	ptr=p;
}

     



type& operator*()const
{
	return *ptr;
}

type* operator->()const
{
	return ptr;
}

bool isValid()const
{
	return ptr!=nullptr;


}


};

class Test
{
	public:
	Test()
	{
		cout<<"test class construtor is called\n";
	}
	~Test()
	{
		cout<<"test class deleted\n";
	}

	void greet()const{
		cout<<"wellcome to test class\n";
	}

};
int main()
{
UniquePtr<Test>p(new Test());

//cout<<"before reset   "<<&p<<endl;

  //p.reset(new Test());

//  cout<<"after reset  "<<&p<<endl;
	p->greet();


//	Test *temp=p.realse();

//	if(temp!=nullptr)
		cout<<&temp<<"valid "<<endl;
//


}


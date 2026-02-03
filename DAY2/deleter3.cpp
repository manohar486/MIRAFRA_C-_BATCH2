#include<iostream>
#include<memory>
using namespace std;
class free
{

	public:

		void opeartor()(int *p)const
		{
			free(p);
			cout<<"memory is freed\n";
		}

};

int main()
{
	unique_ptr<int,free>p{(int*)malloc(sizeof(int))};

	*p=100;
	cout<<*p<<endl;
}


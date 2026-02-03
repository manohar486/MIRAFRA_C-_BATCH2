#include<iostream>
#include<memory>
using namespace std;
//template<typename type>
class freememory
{

	public:
		void operator()(int *p)const
		{
			delete []p;


			cout<<"memory is freed\n";
		}


};

/*void freememory(int *p)
{
	free(p);

	cout<<"memory is freed\n";

}
*/

int main()
{
	unique_ptr<int[],freememory>p(new int[10]);

	if(!p)
	{
		cerr<<"memory allocation is failed\n";
		return 1;
	}

for(int i=0;i<10;i++)
{
	p[i]=i;
cout<<p[i]<<" ";
}

cout<<endl;
//	cout<<*p<<"   it's hold data\n";


}


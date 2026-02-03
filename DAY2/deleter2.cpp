#include<iostream>
#include<memory>
using namespace std;
//template<typename type>
void free(int *p)
{
	free(p);
	cout<<"freed memory\n";
}

int main()
{
	unique_ptr<int,void(*)(int *)>p{(int*)malloc(sizeof(int)),free};

	*p=100;
	cout<<*p<<endl;
}


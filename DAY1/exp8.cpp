#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<string>vec={"manohar","mirafra","manda"};

	for(const auto&a:vec)
		cout<<a<<endl;

}



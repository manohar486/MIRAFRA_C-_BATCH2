#include<iostream>
#include<memory>
using namespace std;

class filefree
{
	public:
		void operator()(FILE *file)const
		{
			if(file)
			{
				cout<<"file is closing fanctor\n";
			fclose(file);
			}

		}


};

int main()
{
	unique_ptr<FILE,filefree>p(fopen("data","w"));

	if(p)
	{
		cout<<"file opened sucessfully\n";
	}

}


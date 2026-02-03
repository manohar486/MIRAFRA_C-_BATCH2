#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#include<cstring>

using namespace std;
class File
{
	int fd;

	public:
	File(const char *path)
	{

		fd=open(path,O_WRONLY|O_RDONLY|O_CREAT,0664);
		cout<<fd<<endl;
	}
               
	void file_write(const char  *str)
	{
		cout<<fd<<endl;
		if(fd>=0)
		{

		write(fd,str,strlen(str));
		}
	}
	~File()
	{
		if(fd>=0)
		    close(fd);

	}

};

int main()
{
	File f("data");
        File f1("cat");
	cout<<"doing some work in file...\n";
      
       f.file_write("welcome to c++ with DSA training");
       f1.file_write("its going good");
       cout<<"working is done\n";

   write(0,"completed \n",15);

}


#include<iostream>
#include<memory>
#include<atomic>
#include<thread>
using namespace std;

atomic<int>counter{0};

//int counter=0;
void increment(){

	for(int i=0;i<10000;i++)
		counter++;

}

void decrement(){

        for(int i=0;i<10000;i++)
                counter--;

}


int main()
{
	thread t1(increment);
	thread t2(decrement);

	t1.join();
	t2.join();

	cout<<"final counter value=  "<<counter<<endl;

}


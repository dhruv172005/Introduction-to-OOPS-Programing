#include<iostream>
using namespace std;

class ticket
{
	public:
		~ticket()
		{
			cout<<"SAVING YOUR TICKET..."<<endl;
		}
};

int main()
{
	ticket*t1 = new ticket();
	
	delete t1;
}

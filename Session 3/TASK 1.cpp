#include<iostream>
using namespace std;

class playlist
{
	public:
		string name;
	
		playlist()
		{
			name="My Favourites";
			cout<<"WELCOME!!"<<endl;
		}
};

int main()
{
	playlist p1;
	
	cout<<"PLAYLIST NAME:- "<<p1.name<<endl;
}

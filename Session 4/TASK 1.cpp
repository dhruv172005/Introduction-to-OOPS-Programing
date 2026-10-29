#include<iostream>
using namespace std;

class socialmediauser
{
	public:
		string username;
		int followers;
		
		void display_profile()
		{
			cout<<"USERNAME: "<<username<<endl;
			cout<<"FOLLOWERS: "<<followers<<endl;
		}
};

int main()
{
	socialmediauser obj;
	
	obj.username="DHRUV";
	obj.followers=2000;
	
	obj.display_profile();
}

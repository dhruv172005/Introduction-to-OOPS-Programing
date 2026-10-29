#include<iostream>
using namespace std;


class socialmediauser
{
	public:
		string username;
		int followers,channel;
		
		void display_profile()
		{
			cout<<"USERNAME: "<<username<<endl;
			cout<<"FOLLOWERS: "<<followers<<endl;
		}
};


class podcaster : public socialmediauser
{
	public:
		string podcastname;
		
		void publish_episode(string episodetitle)
		{
			cout<<"FREE FIRE"<<episodetitle;
			cout<<" PUBLISHED ON"<<podcastname;
			
		}
};

int main()
{
	podcaster obj;
	
	obj.username="DHRUV";
	obj.followers=2000;
	obj.podcastname=" GAMING TALK";
	
	obj.display_profile();
	
	obj.publish_episode(" EPISODE 1");
	
}

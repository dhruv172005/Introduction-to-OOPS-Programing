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


class youtuber : public socialmediauser
{
	public:
		string channelname;
				
		void uploadvideo(string title)
		{
			cout<<""<<title<<" UPLOAD TO"<<channelname;
		}
};

int main()
{
	    youtuber obj;

    obj.username="DHRUV";
    obj.followers=2000;
    obj.channelname=" MYSTERIOUS GAMING";

    obj.display_profile();

    obj.uploadvideo("MY FIRST VIDEO ");

}

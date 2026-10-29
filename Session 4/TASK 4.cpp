#include<iostream>
using namespace std;

class SocialMediaUser
{
    public:
        string username;
        int followers;

        void displayProfile()
        {
            cout<<"Username: "<<username<<endl;
            cout<<"Followers: "<<followers<<endl;
        }
};

class YouTuber : public SocialMediaUser
{
    public:
        string channelName;

        void uploadVideo(string title)
        {
            cout<<" "<<title
                 <<" uploaded to "<<channelName<<endl;
        }
};

class GamingYouTuber : public YouTuber
{
    public:
        void streamGame(string gameName)
        {
            cout<<username<<" is now streaming "
                 <<gameName<<" on "<<channelName;
        }
};

int main()
{
    GamingYouTuber obj;

    obj.username = "Dhruv";
    obj.followers = 4000;
    obj.channelName = "Mysterious Gaming...";

    obj.displayProfile();
    obj.uploadVideo("My First Video");
    obj.streamGame("FREE FIRE");

}

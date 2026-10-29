#include<iostream>
using namespace std;

class Song
{
   	private:
        		string title;
        		string artist;

    	public:
        		void setTitle(string t)
        		{
            		title=t;
        		}

        		string getTitle()
        		{
            		return title;
        		}

        		void setArtist(string a)
        		{
            		artist=a;
        		}

        		string getArtist()
        		{
            		return artist;
        		}
};

int main()
{
    Song obj;

    obj.setTitle("BARBADD");
    obj.setArtist("THE RISH");

    cout<<"OLD SONG TITLE: "<<obj.getTitle()<<endl;

    obj.setTitle("DHUN");

    cout<<"UPDATED SONG TITLE: "<<obj.getTitle()<<endl;
    cout<<"ARTIST: "<<obj.getArtist()<<endl;
}


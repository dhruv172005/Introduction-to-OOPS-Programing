#include<iostream>
using namespace std;

class musicplayer
{
	public:
		virtual void play(string song)
		{
			cout<<"PLAYING: "<<song<<endl;
		}
};

class spotifyplayer : public musicplayer
{
	public:
		void play(string song) override
		{
			cout<<"STREAMING ON SPOTIFY: "<<song<<endl;
		}
};

int main()
{
	musicplayer *player;
	spotifyplayer obj;
	
	player=&obj;
	
	player->play("BARBADD");
}

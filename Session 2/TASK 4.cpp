#include<iostream>
#include<string>
using namespace std;

class playlist
{
	public:
		string name;
		string song[5];
		int count=0;
	
		void addsong(string songtitle)
		{
			song[count]=songtitle;
			count++;
		}
};

int main()
{
	playlist p1;
	
	p1.name="MY FAVORITES";
	
	p1.addsong("BARBAD");
	p1.addsong("HAR KISI KO");
	p1.addsong("ARZ KIYA HE");
	
	cout<<"PLAYLIST NAME:- "<<p1.name<<endl;
	
	cout<<"\nSONG IN PLAYLIST:- "<<endl;
	
	cout<<"1. "<<p1.song[0]<<endl;
	cout<<"2. "<<p1.song[1]<<endl;
	cout<<"3. "<<p1.song[2]<<endl;
}

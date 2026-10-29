#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream file("my_fav_songs.txt",ios::app);
	string song;
	
	cout<<"ENTER A NEW SONG NAME: ";
	getline(cin,song);
	
	file<<song<<endl;
	
	file.close();
	
	cout<<"NEW SONG ADDED SUCCESSFULLY..."<<endl;
	
}

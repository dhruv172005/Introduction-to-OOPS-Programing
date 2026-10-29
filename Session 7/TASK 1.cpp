#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream
	file("MY_FAV_SONGS.txt");
	
	file<<"BARBADD"<<endl;
	file<<"APNA BANA LE"<<endl;
	file<<"ARZ KIYA HE"<<endl;
	file<<"AARZU"<<endl;
	file<<"MAST MAGAN"<<endl;
	
	file.close();
	
	
}

#include<iostream>
using namespace std;

	class Playlist
	{
		
    	public:
        		string name;
        		string createdOn;
        		bool isPublic;
        	
	};

	int main()
	{
		
    		Playlist p1;

    			p1.name = "lofi song";
    			p1.createdOn = "28-10-2026";
    			p1.isPublic = true;

    				cout<<"Playlist Name:- "<<p1.name<<endl;
    				cout<< "Created On:- " <<p1.createdOn<<endl;
    				cout<< "Is Public:- " <<boolalpha<<p1.isPublic<< endl;
	
	
	}


#include<iostream>
using namespace std;

	class Playlist
	{
		
    	public:
    		void togglepublic()
    		{
    			isPublic = !isPublic;
		}
		
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
    			
    			         cout<<"Playlist Name: "<<p1.name<<endl;

    				cout<<"Before Toggle: "<<boolalpha<<p1.isPublic<<endl;

    			p1.togglepublic();
    				cout<< "After First Toggle: "<<p1.isPublic<<endl;

    			p1.togglepublic();
    				cout<< "After Second Toggle: "<<p1.isPublic<<endl;
	}

	


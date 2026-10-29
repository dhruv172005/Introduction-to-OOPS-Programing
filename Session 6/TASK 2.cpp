#include<iostream>
using namespace std;

class instastory
{
	protected:
		int stroyviews;
};

class sponsoredstory : public instastory
{
	public:
		void showviews()
		{
			stroyviews =1000;
			cout<<"STORY VIEWS: "<<stroyviews<<endl;
		}
};

int main()
{
	sponsoredstory s;
	
	s.showviews();
	
}



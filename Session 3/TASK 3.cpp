#include<iostream>
using namespace std;

class movie
{
	public:
		string moviename;
		int year;
		
		movie(string name,int y)
		{
			moviename= name;
			year= y;
		}
		
		movie( movie &m)
		{
			moviename=m.moviename;
			year=m.year;
		}
		
		void display()
		{
			cout<<"MOVIE NAME:- "<<moviename<<endl;
			cout<<"REALISE YEAR:- "<<year<<endl;
		}
};

int main()
{
	movie m1("jailer 2",2026);
	
	movie m2=m1;
	
	cout<<"ORIGANAL MOVIE DETAIL:- "<<endl;
	m1.display();
	
	cout<<"\nCOPY MOVIE DETAIL:- "<<endl;
	m1.display();
	
	
}

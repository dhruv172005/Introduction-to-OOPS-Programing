#include<iostream>
using namespace std;

class task
{
	string title;
	bool isdone;
	
	public:
		 task(string t )
		{
			title=t;
			isdone=false;
		}
		
		void markdone()
		{
			isdone=true;
		}
		
		void display()
		{
			cout<<"TASK:- "<<title<<endl;
			
			
			if(isdone==true)
			{
				cout<<"DONE"<<endl;
			}
			
			else
			{
				cout<<"PENDING"<<endl;
			}
		}
};

int main()
{
	task obj("STUDY C++");
	
	obj.display();
	obj.markdone();
	obj.display();
	
}

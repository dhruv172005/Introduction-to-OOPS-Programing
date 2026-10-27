#include<iostream>
#include<string>
using namespace std;

class task
{
	string title;
	bool isdone;
	
	public:
		task()
		{
			title="";
			isdone=false;
		}
		
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

class tasklist
{
	task tasks[3];
	
	public:
		int count;
		
		tasklist()
		{
			count=0;
		}
		
		void addtask(string title)
		{
			if(count<3)
			{
				tasks[count]=task(title);
				count++;
			}
		}
		
		void marktaskdone(int index)
		{
			if(index>=0 && index<count)
			{
				tasks[index].markdone();
			}
		}	
		
		void showtask()
		{
			int i;
			
			for(i=0;i<count;i++)
			{
				cout<<i+1<<". ";
				tasks[i].display();
			}
		}
};




int main()
{
	tasklist list;
	
	list.addtask("study c++");
	list.addtask("complate assignment");
	list.addtask("prectise oop");
	
	cout<<"\nYOUR TASK LIST:- \n";
	list.showtask();
	
	list.marktaskdone(1);
	
	cout<<"\nUPDATED TASK LIST:-\n";
	list.showtask();
	
}

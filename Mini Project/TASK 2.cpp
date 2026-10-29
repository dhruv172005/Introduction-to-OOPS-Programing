#include<iostream>
#include<fstream>
using namespace std;

class Content
{
    public:
        string title,platform,status;
        int views;

        void addContent()
        {
        	   cin.ignore();
        	   
            cout<<"Enter content title : ";
            getline(cin,title);

            cout<<"Enter platform : ";
            getline(cin,platform);

            cout<<"Enter views : ";
            cin>>views;
            cin.ignore();
            
	   cout<<"Enter status : ";
            cin>>status;

            ofstream file("content_list.txt",ios::app);

            file<<"Title : "<<title<<endl;
            file<<"Platform : "<<platform<<endl;
            file<<"Views : "<<views<<endl;
            file<<"Status : "<<status<<endl;
            file<<"------------------"<<endl;

            file.close();

            cout<<"\nCONTENT SAVED SUCCESFULLY...\n";
        }
};

int main()
{
    Content c;
    int ch;

    do
    {
        cout<<"\n--- CONTENT MENU ---";
        cout<<"\n1. Add Content";
        cout<<"\n2. Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;

        if(ch==1)
        {
            c.addContent();
        }
        else if(ch==2)
        {
            cout<<"Exiting program...";
        }
        else
        {
            cout<<"Invalid choice!";
        }

    }while(ch!=2);

}


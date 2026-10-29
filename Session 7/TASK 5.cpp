#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("instagram_followers.txt");
    
    if (!file.is_open() )
    {
    	cout<<"FILE NOT FOUND!"<<endl;
    	return 1;
    }

    string name;
    int count=0;

    while(getline(file,name))
    {
        count++;
    }

    file.close();

    cout<<"Total Instagram Followers = "<<count;
}


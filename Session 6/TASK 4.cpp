#include<iostream>
using namespace std;

class userprofile
{
	private:
		string mobilenumber;
		
	public:
		void setmobilenumber(string mobilenumber)
		{
			this->mobilenumber =mobilenumber;	
		}
		
		string getmobilenumber()
		{
			return mobilenumber;
		}
};

int main()
{
	userprofile user;
	
	user.setmobilenumber("1234567890");
	
	cout<<"MOBILE NUMBER: "<<user.getmobilenumber()<<endl;
	
}

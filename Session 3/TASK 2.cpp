#include<iostream>
using namespace std;

class product
{
	public:
		string productname;
		int price;
		float rating;
		
		product(string name,int p,float r)
		{
			productname= name;
			 price = p;
			rating = r;
		}
		
		void displayinfo()
		{
			cout<<"PRODUCT NAME:- "<<productname<<endl;
			cout<<"PRODUCT PRICE:- "<<price<<endl;
			cout<<"PRODUCT RATING:- "<<rating<<endl;
			
		}
};

int main()
{
	product p1("laptop",50000,4.7);
	
	p1.displayinfo();
}

#include<iostream>
using namespace std;

class paymentprocessor
{
	public: 	
		float amount;
		
		void processpayment(float amount)
		{
			cout<<"PAYMENT WITHOUT COUPON"<<endl;
			cout<<"AMOUNT: "<<amount<<endl;
		}
		
		void processpayment(float amount,string couponcode)
		{
			cout<<"\nPAYMENT WITH COUPON"<<endl;
			cout<<"COUPON: "<<couponcode<<endl;
			
			float finalamount=amount-100;
			cout<<"\nFINAL AMOUNT: "<<finalamount<<endl;
		}
};


int main()
{
	paymentprocessor p;
	
	p.processpayment(1000);
	p.processpayment(1000,"SAVE100");
}

#include<iostream>
using namespace std;

class FoodOrder
{
    public:
        	   int orderId;
            string restaurantName;
            bool isDelivered;

        			void markDelivered()
       		{
            			isDelivered = true;
            			cout<<"ORDER HAS BEEN DELIVERED SUCCESFULLY!!!"<<endl;
        		}
};

int main()
{
    FoodOrder f1;

    		f1.orderId=17;
    		f1.restaurantName="DOMINOZ";
    		f1.isDelivered=false;

    			cout<<"ORDER ID: "<<f1.orderId<<endl;
    			cout<< "RESTAURENT NAME: " << f1.restaurantName << endl;
    			cout<<"BEFORE DELIVERY: "<<boolalpha<<f1.isDelivered<<endl;

    	f1.markDelivered();

    	cout<<"IS DELIVERED:- "<<f1.isDelivered<<endl;
}

#include<iostream>
using namespace std;

struct Order
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
    public:
        int orderId;
        string restaurantName;
        bool isDelivered;

        FoodOrder(Order data)
        {
            orderId = data.orderId;
            restaurantName = data.restaurantName;
            isDelivered = data.isDelivered;
        }
        
                void markDelivered()
        {
            isDelivered = true;
            cout<<"ORDER HAS BEEN DELIVERED SUCCESFULLY!!"<<endl;
        }

        void display()
        {
            cout<<"ORDER ID : "<<orderId<<endl;
            cout<<"RESTARUANT NAME : "<<restaurantName<<endl;
            cout<<"IS DELIVERED : "<<boolalpha<<isDelivered<<endl;
        }
};

int main()
{
    Order o1 = {17, "DOMINOZZ", false};
    FoodOrder f1(o1);
    f1.display();
    f1.markDelivered();
    cout<<"IS DELIVERED : "<<f1.isDelivered<<endl;
}


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int price,i;

	         ofstream file("wishlist.txt");

    			for(i=1;i<=3;i++)
    	{
        			cout<<"ENTER PRODUCT NAME : ";
        			cin>>name;

        			cout<<"ENTER PRODUCT PRICE : ";
        			cin>>price;

        			file<<name<<" "<<price<<endl;
    	}

    		file.close();

    		ifstream read("wishlist.txt");

    		cout<<"\n-- MY FLIPKART WISHLIST --\n";

   		while(read>>name>>price)
    	{
        		cout<<"PRODUCT NAME : "<<name<<endl;
        		cout<<"PRODUCT PRICE :  "<<price<<endl;
        		cout<<"--------------------"<<endl;
    	}

    read.close();

}


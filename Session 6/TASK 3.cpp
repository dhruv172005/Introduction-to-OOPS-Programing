#include<iostream>
using namespace std;

class product
{
	public: 
		virtual void upload()=0;
};

class electronics : public product
{
	public:
		void upload() override
		{
			cout<<"UPLOADING ELECTRONICS PRODUCT..."<<endl;
		}
};

class clothing : public electronics
{
	public:
		void upload()override
		{
			cout<<"UPLOADING CLOTHING PRODUCT..."<<endl;
		}
};

int main()
{
	electronics e;
	clothing c;
	
	e.upload();
	c.upload();
}



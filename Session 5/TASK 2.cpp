#include<iostream>
using namespace std;

class socialmediauploader
{
	public: 
		virtual void uploadcontent()
		{
			cout<<"UPLOADING CONTENT TO SOCIAL MEDIA"<<endl;
		}
};

class instagramuploader : public socialmediauploader
{
	public: 
		void uploadcontent() override
		{
			cout<<"\nUPLOADING REEL IN INSTAGRAM..."<<endl;
		}
};

class youtubemediauploader : public instagramuploader
{
	public:
		void uploadcontent() override
		{
			cout<<"UPLOADING VIDEO IN YOUTUBE..."<<endl;
		}
};

int main()
{
	socialmediauploader obj1;
	instagramuploader obj2;
	youtubemediauploader obj3;
	
	obj1.uploadcontent();
	obj2.uploadcontent();
	obj3.uploadcontent();
}

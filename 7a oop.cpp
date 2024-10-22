#include<iostream>
using namespace std;
class info
{
	const long aadharno;
	const long pancard;
	string contactno;
	string address;
	
	public:
		info():aadharno(23456756),pancard(123456562)
		{
			contactno="6789054210";
			address="MBD";
		}
		
		long getaadharno() const
		{
			return aadharno;
		}
		
		long getpancard() const
		{
			return pancard;
		}
		string getcontact()
		{
			return contactno;
		}
		string getaddress()
		{
			return address;
		}
		
};

int main()
{
	info a1;
	cout<<"aadhar no:"<<a1.getaadharno()<<endl;
	cout<<"Pan card:"<<a1.getpancard()<<endl;
	cout<<"Contact number:"<<a1.getcontact()<<endl;
	cout<<"Address:"<<a1.getaddress()<<endl;
 return 0;		
}

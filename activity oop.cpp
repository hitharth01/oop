#include<iostream>
using namespace std;

class passenger
{
	string name;
	int age;
	long long tk_no;
	
	public:
		passenger(string name,int age,long tk_no)
		{
			this->name=name;
			this->age=age;
			this->tk_no=tk_no;
		}
		
		 void displayDetails()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"ticket number:"<<tk_no<<endl;
		}
};

int main()
{
	passenger p1("hitharth",18,1234);
	p1.displayDetails();
	
	return 0;
}



//ans 1 the purpose of constructor in passenger class to initialize the attributes of passenger class
//ans 2 display details function is used so we can set details of program(name,age,ticketno) out of the class 
//ans 3 if we initialize the attributes directly without constructor then compiler cannot take these attributes 
//again and again have to instruct the compiler everytime to set detailesin these manner  

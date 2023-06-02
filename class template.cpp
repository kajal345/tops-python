#include<iostream>
using namespace std;
template <typename t>//class template
class demo
{
	t first,second;//variables
	
	public:
		demo()// default constructor
		{
			
		}
		demo( t a,t b) //parametrized constructor

{
	first = a;
	second=b;
	}	
	void addnumbers()//function to print
	{
		cout<<"addition is"<<first+second<<endl;
	}
	void mulnumbers()
	{
		cout<<"multiplication is"<<first*second<<endl;
	}
};
int main()
{
	demo<int>obj(10,20);   //object call with template
	obj.addnumbers();//function call 
	obj.mulnumbers();
}
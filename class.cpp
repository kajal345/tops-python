/*Class: A class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member
functions, which can be accessed and used by creating an instance of that class.*/


#include<iostream>
using namespace std;

class student
{
	
	public:
		int id;
		string name;
		
		void print()
		{
			cout<<"hello this is my first class program";
		}
};

int main()
{
student obj;
obj.id=1;
obj.name="kajal";
cout<<obj.id;
cout<<obj.name;	
obj.print();
	return 0;
}
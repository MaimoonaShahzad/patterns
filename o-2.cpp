#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Student
{
	int a;
	public:
		Student()
		{
			a=5;
		}
		void display();
};

	void Student::display()
	{
		cout<<a;
	}
int main()
{
	Student s;
	s.display();

return 0;
}



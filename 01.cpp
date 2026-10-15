
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Student
{
	private:
		int a,b;
	public:
		Student()
		{
			a=15;
			b=20;
		}
		void show()
		{
			cout<<a;
			cout<<b;
		}
};
int main()
{
	Student S;
	S.show();
	
return 0;
}




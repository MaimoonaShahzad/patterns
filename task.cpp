#include<iostream>
using namespace std;
class sum
{
	private:
	int a, b;
	public:
	sum()
	{
		a=10, b=12;
		int sum=a+b;
	}
	void show()
	{
		cout<<"the value is= "<<a+b;
	}
	
};
int main()
{
	sum s1;
	s1.show();

	return 0;
}

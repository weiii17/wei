#include <iostream>
#include <cstdlib>
using namespace std;

class Employee
{
	private:
		
		char name[20];
		int age;
		int salary;
		char mobile[10];
		
	public:
		
		void input_data()
		{
			cout<<"name:";
			cin>>name;
			cout<<"age:";
			cin>>age;
			cout<<"salary:";
			cin>>salary;
			cout<<"mobile:";
			cin>>mobile;
		}
	void print_data()
	{
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<salary<<endl;
		cout<<mobile<<endl;
	}
		
};



int main()
{
	Employee em1;
	
	cout<<"輸入員工資料:"<<endl;
	em1.input_data();
	cout<<"輸出員工資料:"<<endl;
	em1.print_data();
	
	system("pause");
	return 0;
}

輸入員工資料:
name:林佳薰
age:17
salary:1
mobile:0987878787
輸出員工資料:
林佳薰
17
1
0987878787
請按任意鍵繼續 . . .

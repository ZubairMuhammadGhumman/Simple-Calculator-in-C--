#include<iostream>
using namespace std;
int sum(int &n1,int &n2)
{
	return (n1 + n2);
}
int subtraction(int &n1,int &n2)
{
	return (n1 - n2);
}
int multiply(int &n1,int &n2)
{
	return (n1 * n2);
}
int divid(int &n1,int &n2)
{
	if (n1 > n2)
		return (n1 / n2);
	else
		return (n2 / n1);
}
void menu()
{
	cout << endl;
	cout << "Simple Calculater " << endl;
	cout << "1. Add Number " << endl;
	cout << "2. Subtraction Number " << endl;
	cout << "3. Multiply Number " << endl;
	cout << "4. Divid Number " << endl;
	cout << "Enter Choice " ;
}
int main()
{
	while (true)
	{
		menu();
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
				  int num1, num2;
				  cout << "Enter Number 1 : ";
				  cin >> num1;
				  cout << "Enter Number 2 : ";
				  cin >> num2;
				  cout<<sum(num1, num2);
				  break;
		}
		case 2:
		{
				  int num1, num2;
				  cout << "Enter Number 1 : ";
				  cin >> num1;
				  cout << "Enter Number 2 : ";
				  cin >> num2;
				  cout<<subtraction(num1, num2);
				  break;
		}
		case 3:
		{
				  int num1, num2;
				  cout << "Enter Number 1 : ";
				  cin >> num1;
				  cout << "Enter Number 2 : ";
				  cin >> num2;
				  cout<<multiply(num1, num2);
				  break;
		}
		case 4:
		{
				  int num1, num2;
				  cout << "Enter Number 1 : ";
				  cin >> num1;
				  cout << "Enter Number 2 : ";
				  cin >> num2;
				  cout<<divid(num1, num2);
				  break;
		}
		default:
				break;
		}
	}
	return 0;
}
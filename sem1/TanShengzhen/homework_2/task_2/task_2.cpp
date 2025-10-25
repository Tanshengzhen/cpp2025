#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Please enter a natural number:  ";
	cin >> num;
	if (num % 2 == 0)
	{
		while (num!=1)
		{
			num = num / 2;
		}
		cout << num;
	}
	else if (num % 2 != 0)
	{
		while (num != 1)
		{
			num = (num * 3 + 1) / 2;
		}
		cout << num;
	}
}
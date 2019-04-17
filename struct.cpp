#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct DIV 
{
	string name;
	float sales;
} test[4];git

int main()
{
	for(int i; i < 4; i++)
	{
		cout << "Please enter the sales for each \n";
		cin >> test[i].sales;
	}

	for(int i; i < 4; i++)
	{
		cout << test[i].sales << " ";
	}

	return 0;
}
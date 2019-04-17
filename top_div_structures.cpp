#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct DIV
{
	string name;
	float sales;
}div_info[4];

void populate_div_sales(DIV[], int);
int findHighest(DIV[], int);
void print_result(DIV[], int);

int main()
{
	int top_div_index = 0;
	
	div_info[0].name = "Northeast";
	div_info[1].name = "Southeast";
	div_info[2].name = "Northwest";
	div_info[3].name = "Southwest";

	populate_div_sales(div_info, 4);

	//leave debug statement in final product
	cout << "debug print for array div_sales_array" << endl;
	for (int i=0; i<4; i++) {
		cout << div_info[i].sales << endl;
	}
	top_div_index = findHighest(div_info, 4);

	print_result(div_info, top_div_index);

	return 0;


}
 
void populate_div_sales(DIV div_info[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Enter the sales for "<< div_info[i].name << ": \n";
		cin >> div_info[i].sales;
		if (div_info[i].sales < 0)
			{
				cout << "No sale should be under $0. Please re-enter the sales: \n";
				cin >> div_info[i].sales;
			}
	}
}

int findHighest(DIV div_info[], int size)
{
	float greatestSalesAmount = 0;
	int sales_index;
	for(int i = 0;i < size; i++)
	{
		if (div_info[i].sales > greatestSalesAmount )
		{
			greatestSalesAmount = div_info[i].sales;
			sales_index = i;
		}
	} 
	return sales_index;
}

void print_result(DIV div_info[], int index)
{
	cout << "The division with the highest sales is " << div_info[index].name << " with: $"<< div_info[index].sales << endl;

}
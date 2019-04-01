#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct DIV
{
	string name;
	float sales;
}

DIV div_info[4];

void populate_div_sales(DIV[], int);
int findhighest(DIV[]);
void print_result(DIV[], int);

int main()
{
	int top_div_index = 0;
	
	div_info.name[0] = "Northeast";
	div_info.name[1] = "Southeast";
	div_info.name[2] = "Northwest";
	div_info.name[3] = "Southwest";

	populate_div_sales(div_info[], 4);

	//leave debug statement in final product
	cout << "debug print for array div_sales_array" << endl;
	for (int i=0; i<4; i++) {
		cout << div_info.sales[i] << endl;
	}
	top_div_index = findHighest(div_info.sales[], 4);

	print_result(div_info[], top_div_index);

	return 0;


}
 
void populate_div_sales(DIV div_info[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Enter the sales for "<< div_info.name[i] << ": \n";
		cin >> div_info.sales[i];
		if (div_info.sales[i] < 0)
			{
				cout << "No sale should be under $0. Please re-enter the sales: \n";
				cin >> div_info.sales[i];
			}
	}
}

int findHighest(DIV div_info[], int size)
{
	float greatestSalesAmount = 0;
	int sales_index;
	for(int i = 0;i < size; i++)
	{
		if (sales[i] > greatestSalesAmount )
		{
			greatestSalesAmount = top_div.sales[i];
			sales_index = i;
		}
	} 
	return sales_index;
}

void print_result(DIV div_info[], int index)
{
	cout << "The division with the highest sales is " << div_info.name[index] << " with: $"<< sales[index]<< endl;

}
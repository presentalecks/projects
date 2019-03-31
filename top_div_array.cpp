// Name: top_div_array.cpp
// Author: Alexander Zamora
// Description: 
// This app inputs sales for four regional division and displays the highest.
// To accomplish this, use two arrays of equal length - one for sales and the 
// other for the divisions names.
// The data in these arrays will be positioned so that the divisions will share the same
// indexes in both arrays. 
// Use three functions: one for input, one for determining highest sales, and one for
// displaying results.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void populate_div_sales(float[], string[], int);
int findHighest(float[],int);
void print_result(float[], string[], int);

int main()
{
	int top_div_index = 0;
	float div_sales[4];
	string div_regions[4];
	div_regions[0] = "Northeast";
	div_regions[1] = "Southeast";
	div_regions[2] = "Northwest";
	div_regions[3] = "Southwest";

	populate_div_sales(div_sales, div_regions, 4);

	//leave debug statement in final product
	cout << "debug print for array div_sales_array" << endl;
	for (int i=0; i<4; i++) {
		cout << div_sales[i] << endl;
	}
	top_div_index = findHighest(div_sales, 4);

	print_result(div_sales,div_regions, top_div_index);

	return 0;


}
 
void populate_div_sales(float sales[], string names[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Enter the sales for "<< names[i] << ": \n";
		cin >> sales[i];
		if (sales[i] < 0)
			{
				cout << "No sale should be under $0. Please re-enter the sales: \n";
				cin >> sales[i];
			}
	}
}

int findHighest(float sales[], int size)
{
	float greatestSalesAmount = 0;
	int sales_index;
	for(int i = 0;i < size; i++)
	{
		if (sales[i] > greatestSalesAmount )
		{
			greatestSalesAmount = sales[i];
			sales_index = i;
		}
	} 
	return sales_index;
}

void print_result(float sales[], string names[], int index)
{
	cout << "The division with the highest sales is " << names[index] << " with: $"<< sales[index]<< endl;

}
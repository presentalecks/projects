#include <iostream>
using namespace std;

int* create_array (int);

void enter_data (int*, int);

int main()
{
	int *dyn_array; //pointer
	int students; //integer students
	float avrg; // float for the average number

	do
	{
		cout << "How many students will you enter? ";
		cin >> students;
	}while ( students <= 0 );

	dyn_array = create_array( students );
		//this function creates a dynamic array
		//and returns its pointer
	enter_data( dyn_array, students );
		//use 'pointer' notation in this function to
		//access array elements
		//accept only numbers 0-100 for movie seen
	//avrg = find_average( dyn_array, students );
		//use 'pointer' notation in this function to
		//access array elements
	//cout << "The array is:" << endl << endl;
	//show_array( dyn_array, students);
	
	//cout << endl;
	//cout << "The average is " << avrg << ".\n";

	delete [] dyn_array; //deallocates memory location
	return 0;
}

int* create_array (int n_students)
{
	int tstudents[n_students];

	int* p = tstudents;

	return p;

	delete p;

	p = null;
}

void enter_data (int* p, int n_students)
{
	int counter = 0;

	int count = 1; 

	while (counter < n_students)
	{

	 cout << "How many movies has student " << count << " seen?" << endl;

	 cin >> *p;
	if (*p <= 100 && *p >= 0)
	{
	 p++;
	 counter ++;
	 count ++; 
	}
	else
	 {
	 	cout << "Please keep the number of movies in the 0 to 100 range. Try again:" << endl;
	 
	 	cin >> *p;  
	 }

	 
	}
}

float find_average(int* p, int n_students)
{
	int count
	int f_sum;
	float f_average;
    for (int counter = 1; counter < n_students)
    {
    	p = i; 
    	f_sum = 
    } 	
}
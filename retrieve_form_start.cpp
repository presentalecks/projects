// File: retrieve_form_start.cpp
// Author: 
// cs102 Online
// Date: 
// Description: This program retrieves three form fields and sends the result
//				back to the browser

#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

struct FIELDS 
{
	string name;
	string value;
}; 

const int cnt = 5;	//cnt should be set to the number of fields the html form contains

// Prototypes
void parse(string, FIELDS []);
string param(string, FIELDS [], int);

//main begins
int main()
{
	FIELDS name_value_pairs [cnt];

	string qs(getenv("QUERY_STRING")); 
		//string qs("first=fred&last=flint&color=red");
	cout << "Content-type:text/html\n\n"; 
	cout << "debug with qs: " << qs << "<p>" << endl;

	parse(qs, name_value_pairs); 

	// debug to show content of name_value_pairs
	cout << "debug to show content of name_value_pairs array: " << endl << "<br>";
	for (int index = 0; index<cnt; index++) {
		cout << "name: " << name_value_pairs[index].name << " ";
		cout << "value: " << name_value_pairs[index].value << endl << "<br>";
	} 
 


	// Three fields data are retrieved from the param function
	string first = param("first", name_value_pairs, cnt);
	string last = param("last", name_value_pairs, cnt);
	string chill = param("chill", name_value_pairs, cnt);
	string hype = param("hype", name_value_pairs, cnt);
	string anti = param("anti", name_value_pairs, cnt);

	cout << "first:" << first << endl;
	cout << "chill:" << chill << endl;
	
    return 0;
}

//*******************************************
//******** Functions begin ******************
//*******************************************

//*******************************************
// parse()
// This will separate the name/value pairs found after the ? in 
// the URL and populate the name_value_pairs array of structures
//*******************************************
void parse (string qs, FIELDS f_name_value_pairs [])
{	
	cout << "debug in parse<br>\n" << endl;
	string name, value;
	int start_pos = 0, pos; 
	for (int counter=0; counter < cnt; counter++) {
		pos = qs.find("=", start_pos);
		name = qs.substr(start_pos, pos - start_pos); 
		cout << "name: " << name << "<br>" << endl; 
		start_pos = pos + 1;  
		pos = qs.find("&", start_pos);
		if (pos == string::npos) {
			pos = qs.length();
		}
		value = qs.substr(start_pos, pos - start_pos); 
		cout << "value: " << value << "<br>" << endl; 
		start_pos = pos + 1; 
		f_name_value_pairs[counter].name = name;
		f_name_value_pairs[counter].value = value;
	} 
}

//*******************************************
// param()
// This will find the field value based on the
// field name
//*******************************************
string param(string lookUp, FIELDS f_name_value_pairs[], int f_cnt)
{
	int counter = 0;
	string value;
	bool x = false;

	while (x != true)
	{
		if (f_name_value_pairs[counter].name == lookUp)
		{
				value = f_name_value_pairs[counter].value;

				x = true;
		}
		else
		{
			counter ++;
		}
	
	}
  return value;
}

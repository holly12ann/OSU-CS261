/*****************************************
 * Author: Holly Switzer
 * Date: 4/12/17
 * Description: This program will input a file, extract data and send the total data to an output file
 * **************************************/

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main ()
{
	ifstream inputFile;
	ofstream outputFile;
	string name;
	int total, number;
	
	//Ask user for file name
	cout<< "Please state the name of the file you would like to use\n";
	cin>> name;

	//open file
	inputFile.open (name.c_str());

	//read input file for numbers
	if (inputFile)
		{
		do
			{
			total += number;
			number++;
			}
		
		while (inputFile >> number);
			//{
			//total += number;
			//number++;
			//cout<<" "<<total;}
		//Close input file
		inputFile.close ();

		//open output file
		outputFile.open ("sum.txt");
		
		//place total in output file
		outputFile<<total<<endl;

		//close output file
		outputFile.close ();
		}	
	
	else
		//display error message
		cout<< "Could not access file.\n";

	return 0;
}

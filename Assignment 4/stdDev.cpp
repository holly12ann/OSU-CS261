/***************************************************************
 * Author:Holly Switzer
 * Date: 4/26/17
 * Description: This program will calulate the standard deviation
 * of a set of ages.
 ***************************************************************/

#include <iostream>
#include <string>
#include <cmath>
#include "Person.hpp"
//#include "Person.cpp"

using namespace std;

int numPeople;
double sum, mean, numerator, standardDeviation;
//const int size = numPeople;
//Person person (string name, int age);
//Person getAge ();

double stdDev (Person *personArray[], int size);

/*int main ()
{
    int enteredAge;
    string enteredName;
    //Person *pArray[size];

    int size;
    cout<< "How many people would you like to enter?\n";
    cin >> size;
    
    Person **pArray = new Person*[size];
    
    for (int x=0; x<size; x++)
    {
        cout << "Please enter the name person #"<< (x+1)<<":\n";
        cin >> enteredName;
        cout<< "Please enter the age for "<<enteredName << ": \n";
        cin >> enteredAge;
        
        pArray [x] =new Person (enteredName, enteredAge);
    }
    cout<< "Program will now calculate the standard deviation of the ages.\n";
    
    cout<<stdDev(pArray, size)<<endl;
    
    return 0;
}
*/
double stdDev (Person **personArray, int size)
{
    int age;
    for (int count = 0; count < size; count++)
    {
        age = personArray[count]->getAge();
        sum += age;
    }
    
    mean= sum/size;
    
    
    for (int i=0; i < size; i++)
    {
        numerator += pow( (personArray[i]->getAge() - mean),2);
    }
        standardDeviation= sqrt(numerator/size);
        return standardDeviation;
}


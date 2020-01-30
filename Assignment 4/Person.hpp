/************************************************************
 * Author: Holly Switzer
 * Date: 4/26/17
 * Description: Header file for finding the standard deviation 
 * 		of peoples ages.
 * *********************************************************/
#include <iostream>
#include <string>

using namespace std;

#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
private:
    string name;
    double age;
    
public:
    Person (string x,double y);
    string getName ();
    double getAge ();
};


#endif 


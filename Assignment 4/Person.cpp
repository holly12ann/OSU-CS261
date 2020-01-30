/*****************************************************************
 * Author: Holly Switzer
 * Date: 4/26/17
 * Description: Implementation file for storing names and ages to 
 * 		to the person. Will be used to find standard deviation
 * **************************************************************/

#include <iostream>
#include <string>
#include "Person.hpp"

using namespace std;

Person:: Person (string x, double y)
   {
       name = x;
       age = y;
   }

string Person::getName ()
   {
       return name;
   }

double Person::getAge ()
   {
       return age;
   }


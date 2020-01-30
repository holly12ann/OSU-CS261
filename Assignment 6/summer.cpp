/************************************************************************
 * Author: Holly Switzer
 * Date: 5/9/17
 * Description: This program will find the sum of the elements in an array
 * *********************************************************************/

#include <iostream>

using namespace std;

double summer (double array[], int size);

/*int main(int argc, const char * argv[]) {
    
    int size= 5;
    double numArray [] = { 1,2,3,4,5};
    
    //Print contents of array
    cout << "The array consists of: ";
    
    //loop to print numbers
    for (int x=0; x< size; x++)
        cout << numArray[x] << " ";
    
    //Print array sum with recursive function
    cout << "\n The sum of the array is: ";
    cout<< summer (numArray, size);
    
    cout<< "\n End Program! \n";
    
    return 0;
}*/

double summer (double array[], int size)
{
    //define element size and zero the sum
    int element = size-1;
    double sum=0;
    
    //base case
    if (size == 0)
        return 0;
    
    //add the sum
    else
        sum = array[element] + summer (array, element);
    
    return sum;
}

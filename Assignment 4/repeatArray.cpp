/***************************************************************
 * Author: Holly Switzer
 * Date: 4/26/17
 * Description: This program will create an array and then replace
 *             it with an array twice as large (repeating the
 *                         original array).
  ***************************************************************/

#include <iostream>

using namespace std;

void repeatArray (double *&doubleArray, int size);
/*
int main ()
{
    double *array= new double[3];
    
    cout<<"Original array: \n";

    for(int i=0; i<3; i++)
    {
        array[i] = (i+1)*2;
        cout<<array[i]<<endl;
    }
    
    repeatArray(array, 3);

    cout << "After doubling: \n";
    
    for (int i=0; i< 6; i++)
    {
        cout << array [i] << endl;
    }
    
    delete []array;
   
    return 0;
}
*/
void repeatArray (double *&doubleArray, int size)
{
    int doubleSize=(size*2);
    double *newArray = new double [doubleSize];
    
    for (int i = 0; i<(doubleSize); i++)
    {
        newArray[i]=doubleArray [i%size];   
    }
    for (int i = 0; i<(doubleSize); i++)
        {
         doubleArray[i] = newArray[(i)];
        }
    delete []doubleArray;
    doubleArray = newArray;
}

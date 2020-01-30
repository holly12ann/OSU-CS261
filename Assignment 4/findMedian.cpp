/***************************************************************
 * Author: Holly Switzer
 * Date: 4/26/17
 * Description: This program will find the median of any given
 * 		set of numbers
 * *************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

void findMedian (int array [], int size);

/*
int main ()
{
    int ARRAY_SIZE, sum;
    int medianArray[ARRAY_SIZE];
    double median;
    
    cout << "How many numbers would you like to enter?\n";
    cin>> ARRAY_SIZE;
    
    if (ARRAY_SIZE <= 0)
    {
        cout<<"Please enter a number greater than 0\n";
    }
    
    else
    {
        findMedian (medianArray,ARRAY_SIZE);
    }
    return 0;
}
*/

void findMedian (int array [], int size)
        {
            int sum;
            double median;
            
            for (int num = 0; num < size; num++)
            {
                cout<< "Enter number " << (num+1) << ": \n";
                cin >> array[num];
            }
            
            sort (array, array + size);
            
            if (size % 2 == 0)
            {
                sum=(array[(size/2)] + array[(size/2)-1]);
                median= (static_cast<double>(sum)/2);
                cout << "Median is: " << median<< endl;
            }
            else
            {
                cout << "Median is: "<< array[(size/2)]<<endl;
            }
        }

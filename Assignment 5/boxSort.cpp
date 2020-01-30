/*****************************************************************************
 * Author: Holly Switzer
 * Date: 5/3/17
 * Description: This program will sort boxes from greatest volume to least.
 * **************************************************************************/

#include <iostream>
#include "Box.hpp"
#include "Box.cpp"

using namespace std;

void boxSort (Box boxArray[], int size);

/*int main ()
{
    int numBoxes=4;
    double inLength, inWidth, inHeight;
    Box b1=Box(1,2,3), b2=Box(1,1,1), b3=Box(5,7,3), b4=Box(2,9,1);
    Box boxArray []={b1,b2,b3,b4};
    
    for (int x=0;x<numBoxes;x++)
        cout<<boxArray[x].calcVolume()<<endl;

    //loop  for box dimensions
    /*for (int x=0; x< numBoxes-1; x++)
    {
        cout<< "Box " <<(x+1) << " length: ";
        cin >>inLength;
        cout<<"\n width: ";
        cin >> inWidth;
        cout<< "\n height: ";
        cin>> inHeight;
        
        //set boxArray with dimensions
        boxArray [x] =Box Box (inHeight, inWidth, inLength);
    }
    
    boxSort (boxArray, numBoxes);
    
    for (int x=0;x<numBoxes; x++)
    {
        cout<< boxArray[x].calcVolume()<<endl;
    }
    return 0;
}
*/

void boxSort(Box array[], int size)
{
    Box temp;
    bool swap;    
    
    do
    { swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count].calcVolume() < array[count + 1].calcVolume())

            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}


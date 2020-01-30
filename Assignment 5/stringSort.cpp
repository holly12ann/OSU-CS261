/**************************************************************************
 * Author:Holly Switzer
 * Date: 5/3/17
 * Description: This program will sort an array of strings.
 * ***********************************************************************/

#include <iostream>
#include <string>

using namespace std;


void stringSort (string array [], int size);

/*int main ()
{
    const int size=6;
    string teams []={"Warriors", "lakers", "wIZARDS", "Jazz", "celtics", "warrior"};
    
    cout<< "Unsorted array:\n";
    
    for(int x = 0; x<size; x++)
    {
        cout << " " <<teams[x]<<"\n";
    }
    
    stringSort(teams, size);
    
    cout << "Sorted teams\n";
    
    for (int y=0; y<size; y++)
    {
        cout << " "<<teams[y]<< "\n";
    }
    
    return 0;
}*/

void stringSort(string array [], int size)
{
    for (int x=0; x<size-1; x++)
    {
        int minIndex=x;
        string minValue= array [x];
        
        for (int y = x+1; y<size; y++)
        {
            bool key;
        
            key=false;
            
            if (array[minIndex].length()> array[y].length())
            {
                for (int z=0; z<array[y].length(); z++)
                {
                    if (!key)
                    {
                        if(toupper(array[minIndex].at(z)) < toupper(array[y].at(z)))
                        {
                            key=true;
                        }
                        else if(toupper(array[minIndex].at (z)) > toupper(array[y].at(z)))
                        {
                            minIndex=y;
                            minValue=array[y];
                            key = true;
                        }
                        else if(z==(array[y].length()-1))
                        {
                            minIndex= y;
                            minValue=array[y];
                            key=true;
                        }
                        
                    }
                }
            }
           
            else if (array[minIndex].length()< array[y].length())
            {
                for (int z=0; z<array[minIndex].length(); z++)
                {
                    if (!key)
                    {
                        if(toupper(array[minIndex].at (z)) < toupper(array[y].at(z)))
                        {
                            key=true;
                        }
                        else if(toupper(array[minIndex].at (z)) > toupper(array[y].at(z)))
                        {
                            minIndex=y;
                            minValue=array[y];
                            key = true;
                        }
                        else if(z==(array[minIndex].length()-1))
                        {
                            key = true;
                        }
                    }
                }
            }
            
            else if (array[minIndex].length () == array[y].length())
            {
                for (int z=0; z<array[minIndex].length () && z< array[y].length(); z++)
                {
                    if (!key)
                    {
                        if(toupper(array[minIndex].at (z)) < toupper(array[y].at(z)))
                        {
                            key=true;
                        }
                        
                        else if(toupper(array[minIndex].at (z)) > toupper(array[y].at(z)))
                        {
                            minIndex=y;
                            minValue=array[y];
                            key = true;
                        }
                    }
                }
            }
        }
        
        array [minIndex]=array[x];
        array [x]=minValue;
        
    }
}

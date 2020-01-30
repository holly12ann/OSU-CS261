/*************************************************************************
 Author:Holly Switzer
 Date:5/23/17
 Description: Implementation File for ValSet Template.
 ***********************************************************************/
#include <iostream>
#include <vector>
#include "ValSet.hpp"

using namespace std;

template <class T>
ValSet <T>::ValSet()
{
    tArray = new T[10];
    arrSize= 10;
    numValues = 0;
}

template <class T>
ValSet <T>::ValSet(const ValSet &V)
{
    arrSize = V.arrSize;
    numValues = V.numValues;
    
    tArray= new T[arrSize];
    for (int x=0; x<numValues;x++)
        tArray[x] = V.tArray[x];
}

template <class T>
ValSet <T> &ValSet<T>::operator= (const ValSet &V)
{
    arrSize = V.arrSize;
    numValues = V.numValues;

    tArray= new T[arrSize];
    for (int x=0; x<numValues;x++)
            tArray[x] = V.tArray[x];
    
    return *this;
}

template <class T>
ValSet <T>::~ValSet()
{
    delete tArray;
}

template <class T>
int ValSet <T>::size()
{
    return numValues;
}

template <class T>
bool ValSet <T>::isEmpty()
{
    bool val=false;
    
    if (numValues == 0)
        val=true;
    
    return val;
}

template <class T>
bool ValSet <T>::contains(T x)
{
    for (int a=0; a< numValues; a++)
    {
        if(x==tArray[a])
            return true;
    }
    return false;
}

template <class T>
void ValSet <T>::add(T x)
{
    if (contains(x) == false)
    {
        if (arrSize==numValues)
        {
            arrSize = (2* arrSize);
            T *ptr= new T[arrSize];
            
            int b;
            for (b=0; b<numValues; b++)
                ptr[b] = tArray[b];
            
            delete [] tArray;
            tArray=ptr;
        }
        
    tArray[numValues] = x;
    numValues++;
    }
}

template <class T>
void ValSet <T>::remove(T x)
{
    if (contains(x) == true)
    {
        for (int c=0; c<numValues; c++)
        {
            if (tArray[c]==x)
                
                for (int d=c; d<numValues-1; d++)
                    tArray[d] = tArray[d+1];
        }
    }
}

template <class T>
vector<T> ValSet <T>::getAsVector()
{
    vector <T> vect(numValues);
    
    for (int d=0; d< numValues; d++)
        vect[d]=tArray[d];
    
    return vect;
}

template class ValSet<int>;
template class ValSet<char>;
template class ValSet<std::string>;

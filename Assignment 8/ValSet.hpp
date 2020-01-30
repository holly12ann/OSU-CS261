/*************************************************************************
 Author:Holly Switzer
 Date:5/23/17
 Description: Creating Class for ValSet Template.
 ***********************************************************************/
#include <vector>
using namespace std;

#ifndef ValSet_HPP
#define ValSet_HPP

template <class T>
class ValSet
{
private:

    T *tArray;
    int arrSize, numValues;
    
public:
    ValSet();
    ValSet(const ValSet &V);
    ValSet &operator= (const ValSet &V);
    ~ValSet();
    int size();
    bool isEmpty();
    bool contains(T x);
    void add(T x);
    void remove(T x);
    vector<T> getAsVector();
};

#endif

/***********************************************************
 * Author:Holly Switzer
 * Date: 5/13/17
 * Description: Header file for copying integers
 * **********************************************************/

#ifndef MyInteger_HPP
#define MyInteger_HPP

class MyInteger
{
private:
    int *pInteger;
    
public:
    MyInteger(int x);
    ~MyInteger ();
    MyInteger(const MyInteger &x);
    void setMyInt(int x);
    int getMyInt();
    void operator=(MyInteger &x);
};

#endif

/***********************************************************
 * Author:Holly Switzer
 * Date: 5/13/17
 * Description: This program will copy integers and place them accordingly
 * ********************************************************/

#include "MyInteger.hpp"
#include <iostream>

using namespace std;

MyInteger::MyInteger(int x)
{
    pInteger = new int();
    *pInteger = x;
}

MyInteger:: ~MyInteger()
{
    pInteger=NULL;
    delete pInteger;
}

MyInteger:: MyInteger(const MyInteger &num)
{
    pInteger= new int();
    *pInteger= *num.pInteger;
}

void MyInteger::setMyInt(int x)
{
    *pInteger= x;
}

int MyInteger::getMyInt()
{
    return *pInteger;
}

void MyInteger::operator= (MyInteger &x)
{
    pInteger= new int;
    *pInteger=x.getMyInt();
}


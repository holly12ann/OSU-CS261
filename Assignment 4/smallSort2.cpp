/****************************************************************
 * Author: Holly Switzer
 * Date: 4/26/17
 * Description: This program will sort three int variables by 
 * 		their addresses.
 * *************************************************************/

#include <iostream>

using namespace std;

void smallSort (int *a,int *b,int *c)
{
    int t;

    if (*a>*b)
    {
	t=*a;
	*a = *b;
	*b = t;
    }

    if (*a > *b)
    {
	t=*a;
        *a = *c;
        *c = t;
    }
	
    if (*b > *c)
    {
	t=*b;
	*b=*c;
	*c=t;
    }
}

/*
int main ()
{
    int a=14;
    int b=-90;
    int c=2;

    smallSort (&a, &b, &c);
    cout<< a << ", " << b << ", "<< c <<endl;

    return 0;
}
*/

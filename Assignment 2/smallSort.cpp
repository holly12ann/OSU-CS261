/****************************************
 * Author: Holly Switzer
 * Date: 4/12/17
 * Description: This program will sort values into ascending orders.
 * *************************************/

#include <iostream>

using namespace std;

void smallSort (int &a, int &b, int &c)
{	if(a>b){
		int tmp = a;
		a=b;
		b=tmp;
		}
	 if(a>c){
                int tmp = a;
                a=c;
                c=tmp;
                }
 	if(b>c){
                int tmp = b;
                b=c;
                c=tmp;
                }	
	return;
}
	

/*int main()
{
	int a=14, b=-90, c=2;
	
	smallSort(a, b, c);
	
	cout<< a << ", "<< b << ", "<< c <<endl;


return 0;
}*/

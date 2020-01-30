/*****************************************************************
 * Author:Holly Switzer
 * Date: 5/10/17
 * Description: This program will convers binary numbers to integers
 * 		and integers to binary numbers.
 * ***************************************************************/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binToDec (string x);
string bToDHelp(string x);
string decToBin (int x);

/*int main()
{
    string bin= "101101101";
    int dec=365;
    
    cout<< "sending binary "<< bin<< " to decimal\n";
    cout<< binToDec (bin)<<"\n";

    
    cout<<"sending decimal " << dec<<" to binary\n";
    cout<< decToBin(dec)<<"\n";
    
    
    cout<<"End Program\n";
    
    return 0;
    
}*/
//convert binary to decimal
int binToDec (string x)
{
    if (x=="")
        return 0;
    
    else if (x.at(0) =='1')
        return pow(2,x.length()-1) + binToDec (bToDHelp(x));
    
    else
        return binToDec (bToDHelp(x));

    
}
//Helper function
string bToDHelp(string x)
{
    x.erase(0,1);
    return x;
}
//convert decimal to binary
string decToBin(int x)
{
    int num, rem;
    
    if (x==0)
        return "0";
    else if (x== 1)
        return "1";
    else
    {
        num = x/2;
        rem= x%2;
        
        return decToBin(num) + decToBin(rem);
    }

}


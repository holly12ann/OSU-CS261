/****************************************************************************************
 Author: HOLLY SWITZER
 Date: 6/2/17
 Description: This program will calculate postfix equations
 ****************************************************************************************/

 
#include <iostream>
#include <stack>

using namespace std;

double postfixEval(char *evalStr)
{
    stack<double> evalStack;
    char *s = evalStr;
    
    //not an empty or end of string
    while(*s != '\0')
    {
        //finding digits and creating integers
        if (*s >= '0' && *s <= '9')
        {
            int num = 0;
            while(*s >= '0' && *s <= '9' && *s != '\0')
            {
                num *= 10;
                num += *s - '0';
                s++;
            }
            
            evalStack.push(num);
        }
    
    
        //addition
        if(*s == '+')
        {
            double first, second;
            
            first = evalStack.top();
            evalStack.pop();
            
            second = evalStack.top();
            evalStack.pop();
          
            evalStack.push(second + first);
        }
        
        //subtraction
        else if(*s == '-')
        {
            double first, second;
            
            first = evalStack.top();
            evalStack.pop();
            
            second = evalStack.top();
            evalStack.pop();
            
            evalStack.push(second - first);
            
        }

        //multiplication
        else if(*s == '*')
        {
            double first, second;
            
            first = evalStack.top();
            evalStack.pop();
            
            second = evalStack.top();
            evalStack.pop();
            
            evalStack.push(second * first);
        }
        
        //division
        else if(*s == '/')
        {
            double first, second;
            
            first = evalStack.top();
            evalStack.pop();
            
            second = evalStack.top();
            evalStack.pop();
            
            evalStack.push(second / first);
        }

        //increment for next character
        s++;
    }
    
    return evalStack.top();
}

/*int main()
{
    char x[] = "50 10 5 - / 2 5 * *";
    cout << postfixEval(x) << "\n";
}*/

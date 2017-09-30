Trig_Functions_Code-
====================

//A C++ implemenation to simulate a calculator's method for tigonometric functions for small values 
//All trig function approximations are done using their respective Maclaurian Series expansions 

#include <iostream>
#include <cmath>

long int factorial(int );  //seperate function to calculate the factorial in the Maclaurian series 
using namespace std;

int main()
{
     long double Sin[6], num = 0;     //Long double so we can get more signifcant figures 
     long double sum = 0;             
     int d;                           

    cout << "Enter a value for x in the equation f(x) = sin(x)\n";   
    cin >> num;
    cout << "\n";
        for(int n = 0; n < 6; n++)
        {
            d = 2*n + 1;                                
            Sin[n] = (pow(-1, n)*pow(num, 2*n + 1)/(factorial(d)));    //Maclaurin Series Expansion of sin(x) 
            sum += Sin[n];
            cout << Sin[n] << endl;
        }
        cout << "sin(" << num << ") = " << sum << endl;    //outputs sin([user's number]) = [number we calc'd]

    return 0;       
}

long int factorial(int num)
{ 
	if(num == 0) 
		return 1; 
	int i = num;  
        for(; num > 1; num--)
		i = i*(num - 1);  
	return i; 
} 



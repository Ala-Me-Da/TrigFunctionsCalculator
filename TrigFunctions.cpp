Trig_Functions_Code-
====================

//Just a programming exercise that calculates real number inputs for f(x)=sin(x). 
//I know you're like "Why is it called Trig Functions if you only have sin(x)?"
//Cause I'm adding the rest later once I've actually managed to do sin(x) right 
//No, I'm not just going to use C++'s built in trig. I'm trying to replicate the code behind it
//All trig function approximations are done using their respective Maclaurian Series expansions 

#include <iostream>
#include <cmath>

int factorial(int );  //seperate function to calculate the factorial in the Maclaurian series 
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

int factorial(int v)
{
	if(v <= 1)
        return 1;
    else
        return  v * factorial(v - 1);
}



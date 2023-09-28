// da3.cpp
// Ash Moore-Schultz
// 2023-09-21
//
// For CS 311 Fall 2023
// Source for Assignment 3 functions

#include "da3.hpp"     // For Assignment 3 prototypes & templates

#include <functional>
using std::function;

//Checks to find if the inputted function ff throws an exception.
void didItThrow(const function<void()> & ff,
                bool & threw)
{
    try
    {
          ff(); //function throws exception
    }
    catch (...)
    {
          threw = true; //found exception so setting threw to true
          throw;
    }
    threw = false; //function doesn't error out so set threw to false
}

//Finds the greatest common denominator of two integers, a and b
// pre: a != b, a and b both are greater then 0
int gcd(int a, int b)
{
    //base case
    if (a == 0)
    {
        return b;
    }
	else if (a == b)
	{
		return a;
	}
    //recursive case
    if (a > b)
    {
		gcd(b, a);
    }
	else
	{
		gcd(b % a, a);
	}
}


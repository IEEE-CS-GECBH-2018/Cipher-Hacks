//Increment and decrement operators

//Write a cpp program to initialize two variables(i,j) each with value 10 and store their pre-incremented and post-incremented values in variables a and b respectively.

#include<iostream>
using namespace std;
int main()
{
    int x, y;
    int i = 10, j = 10;
    x = ++i; //add one to i, store the result back in x
    y = j++; //store the value of j to y then add one to j
    cout << x << endl; //11
    cout << y <<endl; //10
    return 0;
}

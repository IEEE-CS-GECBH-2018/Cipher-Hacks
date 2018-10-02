//Conditional Operators

//Write a cpp program to initialize two variables(a,b) each with value 5 and 6 respectively and display the biggest number using conditional operators

#include<iostream>
using namespace std;
int main()
{
    int a = 5, b = 6, big;
    big = (a > b) ? a : b;
    cout << "The biggest Number = " << big << endl;          //6

    return 0;
}


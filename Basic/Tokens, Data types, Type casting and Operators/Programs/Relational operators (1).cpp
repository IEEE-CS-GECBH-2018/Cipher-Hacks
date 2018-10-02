//Relational Operators

//Write a cpp program to initialize two numbers (a,b) with values from the user and display the relation between them using relational operators.

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    
    cout<<"Enter the value of a"<<endl;
    cin>> a;
    
    cout<<"Enter the value of b"<<endl;
    cin>> b;
    
    if(a==b)
        
        cout<<"a and b are equal"<<endl;
    
    else if(a<b)
        
        cout<<"a is less than b"<<endl;
    
    else
        
        cout<<"a is greater than b"<<endl;


    return 0;
}


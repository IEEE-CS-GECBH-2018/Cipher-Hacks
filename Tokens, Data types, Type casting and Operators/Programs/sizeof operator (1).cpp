//sizof() operator demo

#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    double c;
    short int d;
    long int e;
    long double f;
    unsigned int h;
    signed int i;
    char ch;
    string S;
    
    cout<<"Enter an integer"<<endl;
    cin>> a;
    
    cout<<"Enter a floating number"<<endl;
    cin>> b;
    
    cout<<"Enter a double number"<<endl;
    cin>> c;
    
    cout<<"Enter a short integer"<<endl;
    cin>> d;
    
    cout<<"Enter a long integer"<<endl;
    cin>> e;
    
    cout<<"Enter a long double"<<endl;
    cin>> f;
    
    cout<<"Enter an unsigned integer"<<endl;
    cin>> h;
    
    cout<<"Enter a signed integer"<<endl;
    cin>> i;
    
    cout<<"Enter a character"<<endl;
    cin>> ch;
    
    cout<<"Enter a string"<<endl;
    cin>> S;
    
    
    cout<<"Size of an Integer = "<< sizeof(a)<<" Bytes"<< endl;
    cout<<"Size of a Floating Number = "<< sizeof(b)<<" Bytes"<< endl;
    cout<<"Size of a Double Number = "<< sizeof(c)<<" Bytes"<< endl;
    cout<<"Size of a Short Integer = "<< sizeof(d)<<" Bytes"<< endl;
    cout<<"Size of a Long Integer = "<< sizeof(e)<<" Bytes"<< endl;
    cout<<"Size of a Long Double = "<< sizeof(f)<<" Bytes"<< endl;
    cout<<"Size of an Unsigned Integer = "<< sizeof(h)<<" Bytes"<< endl;
    cout<<"Size of a Signed Integer = "<< sizeof(i)<<" Bytes"<< endl;
    cout<<"Size of a Charecter = "<< sizeof(ch)<<" Bytes"<< endl;
    cout<<"Size of the String = "<< sizeof(S)<<" Bytes"<< endl;
    
    
    
    return 0;
}

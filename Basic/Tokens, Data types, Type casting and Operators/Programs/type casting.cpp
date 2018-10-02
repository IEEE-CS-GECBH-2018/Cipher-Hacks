//Type Casting demo



#include<iostream>
using namespace std;
int main()
{
    float salary =10000.0;
    double totalPay, bonus= 2000.0;
    totalPay = static_cast<double>(salary) + bonus;
    cout<< totalPay << endl ;
    
    return 0;
}


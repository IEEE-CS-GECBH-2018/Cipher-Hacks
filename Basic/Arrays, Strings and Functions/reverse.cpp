#include<iostream>
using namespace std;
int main ()
{
    int i,score[5];
    cout<<"enter the elements:";
    for(i=0;i<5;i++)
    {
        cin>>score[i];
    }
    for(i=4;i>=0;i--)
        cout<<"score["<<i<<"] is "<<score[i]<<"\n";
    return 0;
}

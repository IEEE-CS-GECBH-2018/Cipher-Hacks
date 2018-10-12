#include<iostream>
using namespace std;
int main()
{
    int ar[100],i,n,ele;
    cout<<"enter the no of elements in the array;";
    cin>>n;
    cout<<"enter the elements:";
    for(i=0;i<n;i++)
        cin>>ar[i];
    cout<<"enter the elements you want to find:\n";
    cin>>ele;
    for(i=0;i<n;i++)
    {
        if(ar[i]==ele)
            cout<<"the element is found at "<<i+1<<" position.";
    }
    return 0;
}

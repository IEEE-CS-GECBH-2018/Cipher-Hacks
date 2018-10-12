#include<iostream>
using namespace std;
int main()
{
    int first,last,mid,i,ar[100],n,ele;
    cout<<"enter the no of elements:";
    cin>>n;
    cout<<"enter the sorted array:";
    for(i=0;i<n;i++)
        cin>>ar[i];
    cout<<"enter the element you want to find:\n";
    cin>>ele;
    first=0;
    last=(n-1);
    mid=(first+last)/2;
    while(last>=first)
    {
        if(ar[mid]==ele)
        {
            cout<<"the element is found in "<<mid+1<<" position.\n";
            break;
        }
        else if(ele>ar[mid])
        {
            first=(mid+1);
        }
        else
        {
            last=(mid-1);
        }
        mid=(first+last)/2;
    }
    if(first>last)
        cout<<"the element is not found:";
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of test cases=";
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n;
    cout<<"Enter the number of elements=";
    cin>>n;
    int a[n];
    cout<<"Enter array elements=";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cout<<"Enter the number to be find=";
    cin>>k;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Present and Number of comparisions= "<<i+1<<endl;
            break;
        }
    }
     if(i==n)
            cout<<"Not Present and number of comparisons="<<i<<endl;
}
return 0;
}

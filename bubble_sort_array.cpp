#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                c=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=c;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
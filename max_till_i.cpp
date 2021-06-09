#include<bits/stdc++.h>
using namespace std;

//one method
/* int maxtilli(int arr[],int i)
   {
    int m=0;
    for(int j=0;j<=i;j++)
    {
       if(arr[j]>m){
           m=arr[j];
       }
    }
    return m;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       cout<<maxtilli(arr,i)<<" ";
    }
    return 0;
}
*/

//second method

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
       m=max(m,arr[i]);
       cout<<m<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

//function for decimal to binary conversion//
int dtob(int a) 
{
  int b=0,i=0,c;
  while(a!=0)
  {
   c=a%2;
   b=b+(c*pow(10,i));
   i++;
   a=a/2;
  }
  return b;
}

int main()
{
int a;
cin>>a;
cout<<"decimal to binary="<<dtob(a)<<endl;

return 0;
}
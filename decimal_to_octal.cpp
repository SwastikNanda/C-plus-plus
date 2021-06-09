#include<bits/stdc++.h>
using namespace std;

//function for decimal to octal conversion//
int dtoh(int a) 
{
  int b=0,i=0,c;
  while(a!=0)
  {
   c=a%8;
   b=b+(c*pow(10,i));
   i++;
   a=a/8;
  }
  return b;
}

int main()
{
int a;
cin>>a;
cout<<"decimal to hexadecimal="<<dtoh(a)<<endl;

return 0;
}
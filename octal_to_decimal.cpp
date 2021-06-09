#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

//function for octal to decimal conversion//
int otod(int a) 
{
  int b=0,i=0,c;
  while(a!=0)
  {
      c=a%10;
      b=b+(c*pow(8,i));
      i++;
      a=a/10;
  }
  return b;
}

int main()
{
int a;
cin>>a;
cout<<"octal to decimal="<<otod(a)<<endl;

return 0;
}
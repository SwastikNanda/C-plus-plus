#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

//function for binary to decimal conversion//
int btod(int a) 
{
  int b=0,i=0,c;
  while(a!=0)
  {
      c=a%10;
      b=b+(c*pow(2,i));
      i++;
      a=a/10;
  }
  return b;
}

int main()
{
int a;
cin>>a;
cout<<"binary to decimal"<<btod(a)<<endl;

return 0;
}
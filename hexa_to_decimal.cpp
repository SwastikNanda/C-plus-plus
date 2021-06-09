#include<bits/stdc++.h>
using namespace std;

//function for hexadecimal to decimal conversion//
int htod(string a) 
{
  int b=0,i=0,c;
  c=a.size();
  for(int j=c-1;j>=0;j--)
  {
      if(a[j]>='0' && a[j]<='9')
      {
      b=b+((a[j]-'0')*pow(16,i));
      }
      else if(a[j]>='A' && a[j]<='F')
      {
      b=b+((a[j]-'A'+10)*pow(16,i));
      }
      i++;
  }
  return b;
}

int main()
{
string a;
cin>>a;
cout<<"hexa to decimal="<<htod(a)<<endl;

return 0;
}
#include<bits/stdc++.h>
using namespace std;

//function for decimal to hexadecimal conversion//
string dtoh(int a) 
{
  int i=0,c;
  string b="";
 while(a!=0)
 {
    c=a%16;
    if(a<=9){
    b=b+to_string(c);
    }   
    else if(c>9){
        char c='A'+c-10;
        b.push_back(c);
    }
    a=a/16;
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
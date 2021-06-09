#include<iostream>
#include<cstdio.h>
#include<conio.h>
#include<string.h>
using namespace std;


int main()
{
 char v[100],b[100];
    gets(v);
	int n,a,c,p,u;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
      gets(b);
	  a=strlen(v);
	  c=strlen(b);
	  p=0;
	  for(int j=0 ; j<c ; j++)
	   {
		  u=0;
		  for(int k=0 ; k<a ; k++)
		  {
			if(b[j]==v[k]){u=u+1;}
		  }
		  if(u>0){p=p+1;}
	   }
      if(p==c){cout<<"POSITIVE"<<endl;}
	  else{cout<<"NEGATIVE"<<endl;}
	}
	return 0;
}
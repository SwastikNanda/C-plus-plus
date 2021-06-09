#include<iostream>
using namespace std;
#define R 4
#define C 4

void spiral(int i, int j, int r, int c,int arr[R][C])
{
    if(i>=r || j>=c){return;}

   for(int a=j;a<=c-1;a++)
   {
     cout<<arr[i][a]<<" ";
   }
   for(int a=i+1;a<r;a++)
   {
       cout<<arr[a][c-1]<<" ";
   }
      if ((r - 1) != i)
   for(int a=c-2;a>=j;a--)
   {
       cout<<arr[r-1][a]<<" ";
   }
   if((c-1)!=j)
   for(int a=r-2;a>i;a--)
   {
       cout<<arr[a][j]<<" ";
   }
   
    spiral(i+1,j+1,r-1,c-1,arr);
   
}

int main()
{

    int arr[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiral(0,0,R,C,arr);
    return 0;
}
#include<stdio.h>
int main()
{
  /*  int x =1;
    while (x==1)
    {
        x=x-1;
      printf("\n%d",x);
      
    }
    */
   int x=4,y,z;
   y= --x;
   z=x--;
   printf("\n%d%d%d",x,y,z);
}
#include<stdio.h>
int main ()
{ 
 int n;
   printf("Enter a number: ");
    scanf(" %d", &n);
int nst=1;
     for(int i=1;i<=n;i++){
         // space ke liye use kiye hai 
         for(int j=1;j<=n-i;j++){
            
           printf(" ") ;
           }
           int a=1;
           for(int k =1;k<=nst;k++){
            int d = a+64;
           char ch = (char)d;
           printf("%c ",ch);
           a++;
            
           }
           nst =nst +2;
     printf(" \n");


}}
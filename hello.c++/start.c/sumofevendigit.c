#include<stdio.h>
int main()
 {
  // sum of given digits

//     int n;
//     printf("Enter a number:");
//     scanf(" %d",&n);
//     int lastDigit = 0;
//     int sum =0;
//     while(n!=0){
//         lastDigit = n%10;
//         sum =sum  +lastDigit ;
//         n=n/10;
//     } printf("Sum of digits=%d\n",sum);

    int n;
    printf("Enter a number:");
    scanf(" %d",&n);
    int lastDigit =0;
   
    while(n!=0){
         int sum =0;
        
        n=n/10;
        lastDigit = n%10;
        if (lastDigit%2==0){
             sum = sum + lastDigit;
               printf("the sum is :%d\n",sum); 
        }
         }
   
}
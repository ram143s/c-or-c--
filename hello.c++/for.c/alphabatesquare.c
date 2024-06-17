#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a number: ");
    scanf(" %d", &n);
  //print A B C D
    for(int i=1;i<=n;i++){
        int a=1;
        // j=n krenge to line me ABCD aayega 
        for (int j = 1;j<=i;j++) {
            int d = a+64;
            char ch = (char)d;
            printf("%c",ch);
            a++;
    }
    printf(" \n");
}}
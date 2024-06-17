#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter cost Prise: ");
    printf("Enter  selling Price: ");
    scanf("%d %d", &cp,&sp);
     if (cp < sp) {
        printf("profit");
      } if (cp > sp){
         printf("loss");
     }
     if (cp == sp){
       printf("No Profit or Loss");}
}
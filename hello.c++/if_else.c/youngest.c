#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the age of ram: ");
    scanf("%d", &a);
    printf(" Enter the age of shyam:");
    scanf("%d", &b);
    printf("Enter  the age of ankit: ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("Ram is young");
    }
    if (a > b && b < c)
    {
        printf("shyam is young");
    }
    if (a > c && b > c)
    {
        printf("Ankit is young");
    }
}
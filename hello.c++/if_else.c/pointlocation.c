#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    if (x == 0 && y == 0)
    {
        printf("lies in origin");
    }
    else if (x == 0)
    {printf("lies on y axis");
    
    }
    else if (y == 0)
    {
        printf("lies on x-axis");
    }
    else
    {
        printf("not lies x or y axis");
        
    }
}
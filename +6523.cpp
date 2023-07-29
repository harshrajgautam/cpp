#include <stdio.h>
int main(void)
{
    int n;
    int max = 0;
    printf("Enter a number");
    scanf("%d", &n);
    while (n != 0)
    {
        if (max < n)
        {
            max = n;
        }
        printf("Enter a number ");
        scanf("%d", &n);
    }
    printf("Max is: %d", max);
return 0;}

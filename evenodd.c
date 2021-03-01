#include <stdio.h>
int main()
{
    float even, odd, n;
    printf("please enter the number:");
    scanf("%d", &n);
    if (n / 2 == 0)
        printf("the number is even");
    else
        printf("the number is odd\n");
    return 0;
}
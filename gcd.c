#include <stdio.h>

int main()
{
    int n1, n2, i, GCD;

    printf("input two integers \n");
    scanf("%d %d", &n1, &n2);

    for(i = 1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            GCD=i;
    }

    printf("GCD of %d and %d is = %d", n1, n2, GCD);
    return 0;
}

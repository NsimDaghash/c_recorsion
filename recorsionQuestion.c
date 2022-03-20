/* write recorsion function that get a positve number and return the value of:
  1 + 2^2 + 2*3 + 4^4 + 2*5 + ... + n^2 or 2*n */
#include <stdio.h>

int MultiPow(int x)
{  
    if (x == 1)
    {
        return 1;
    }
    if (x % 2 == 0)
    {
        return (MultiPow(x - 1) + x * x);
    }
    else
        return (MultiPow(x - 1) + x * 2);
}

void main()
{
    int x, sum;
    printf("Enter number: ");
    scanf("%d", &x);
    sum = MultiPow(x);
    printf(" the value is : %d", sum);
}
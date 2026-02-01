#include <stdio.h>
#include <math.h>

int main() 
{
    int x;
    int i, limit, count = 0;

    printf("Please enter a number (only positive integers): ");
    scanf("%d", &x);

    limit = ceil(sqrt(x));  
    for (i = 2; i <= limit; i++)
    {
        if (x % i == 0)
        {
            count = 1; 
            break;
        }
    }

    if ((count == 0 && x != 1) || x == 2 || x == 3)
        printf("%d is a prime number", x);
    else
        printf("%d is not a prime number", x);

    return 0;
}

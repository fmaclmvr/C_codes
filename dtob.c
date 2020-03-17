#include <stdio.h>
#include <math.h>
long a[10000] = {0};
char b[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
              'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
              'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
long power(long base, long p);

//將十進位數字轉換成指定的進位制

int main()
{
    long n, base, k = 0, max = 0;

    printf("Give an integer in decimal: ");
    scanf("%ld", &n);
    printf("Give a base(2~36): ");
    scanf("%ld", &base);

    if (base == 2)
        printf("The number under binary system is: ");
    else if (base == 3)
        printf("The number under ternary system is: ");
    else if (base == 4)
        printf("The number under quaternary system is: ");
    else if (base == 5)
        printf("The number under quinary system is: ");
    else if (base == 6)
        printf("The number under senary system is: ");
    else if (base == 8)
        printf("The number under octal system is: ");
    else if (base == 10)
        printf("The number under decimal system is: ");
    else if (base == 12)
        printf("The number under duodecimal system is: ");
    else if (base == 16)
        printf("The number under hexadecimal system is: ");
    else if (base == 20)
        printf("The number under vigesimal system is: ");
    else
        printf("The number under base-%ld system is: ", base);

    while (power(base, max) <= n)
    {
        max++;
    }

    for (long i = max - 1; i >= 0; i--)
    {
        for (long j = 0; j < base; j++)
        {
            if (n - j * power(base, i) >= 0 && n - (j + 1) * power(base, i) < 0)
            {
                printf("%c", b[j]);
                n = n - j * power(base, i);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}

//無聊新增一個註解(2020/3/17)

long power(long b, long p)
{
    long result = 1;
    for (long i = 1; i <= p; i++)
    {
        result = result * b;
    }
    return result;
}
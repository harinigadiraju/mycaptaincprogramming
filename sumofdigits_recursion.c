#include<stdio.h>
int sum(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum(n / 10));
}
int main()
{
    int num = 1234;
    int result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}

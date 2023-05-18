#include<stdio.h>
#include<math.h>
int main()
{
    int num, i, j, temp, rem, sum, n;

    printf("Enter the number of digit of narcissus number : ");
    scanf("%d", &num);

    n = pow(10, num);

    printf("The narcissus numbers are: \n", num);
    for (i=100; i<n; i++)
    {
        sum = 0;
        temp = i;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + pow(rem, num);
            temp = temp/10;
        }

        if (i == sum)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

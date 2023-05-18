#include<stdio.h>
#include <string.h>
         int main()
{
    char string[100];
    int N;
    printf("Write the Sentence: ");
    gets(string);
    printf("How many Letter do you want to take at the end?: ");
    scanf("%d", &N);

    int length = strlen(string);
    N = N % length;
    for (int i = N; i < length; i++)
        printf("%c", string[i]);
    for (int i = 0; i < N; i++)
        printf("%c", string[i]);
    printf("\n");

    return 0;
}

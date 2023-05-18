#include <stdio.h>
#include <string.h>
int main()
{
 char str[80];
    int i, j;
    printf("Enter the sentence: ");
    gets(str);
    for (i = strlen(str) - 1; i >= 0; i--)
        {
        for (j = i; j >= 0; j--)
         {
            if (str[j] == ' ')
            {
                str[j] = '\0';
                printf("%s ", &str[j] + 1);
                i = j;
            }
        }
    }
    printf("%s", str);
    return 0;
}

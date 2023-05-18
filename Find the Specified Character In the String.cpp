#include<stdio.h>
#include<string.h>
int main()
{
    char S[81];
    char c;
    int i,j;
    int flag=0;
    printf("Enter The sentence: ");
    gets(S);
    printf("Enter a character : ");
    scanf("%c",&c);
    for(i=0;i<strlen(S);i++)
    {
        if(S[i]==c)
        {
            flag=1;
            printf("%s\n",&S[i]);
            break;
        }
    }

    if(flag==0)
    printf("Not found");
   return 0;
}

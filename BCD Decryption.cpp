#include <stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("Enter a 3 digit number: ");
	scanf("%d",&n);

	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("Reversed Number: %d",rev);
	return 0;
}

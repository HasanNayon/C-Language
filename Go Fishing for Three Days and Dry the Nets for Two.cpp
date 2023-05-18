#include <stdio.h>

int main()
{
	int N;
	printf("Please enter the day: ");
	scanf("%d", &N);
	if (N % 5 == 0 || N % 5 == 4)
		printf("Jack is drying the nets on the Nth day.\n");
	else
		printf("Jack is fishing on the Nth day.\n");
	return 0;
}

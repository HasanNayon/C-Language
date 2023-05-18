#include<stdio.h>
int main(){
	int n,i,a,b,max,k;
	int s[1000],c[10];
	printf("How Many positive integers:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
        {
		scanf("%d",&s[i]);
	}

	for(i=0;i<10;i++)
        {
		c[i] = 0;
	}

	for(i=0;i<n;i++)
        {
		a = s[i];
		while(a!=0)
		{
			b = a % 10;
			a = a / 10;
			switch(b)
			{
				case 0:c[0]++;break;
				case 1:c[1]++;break;
				case 2:c[2]++;break;
				case 3:c[3]++;break;
				case 4:c[4]++;break;
				case 5:c[5]++;break;
				case 6:c[6]++;break;
				case 7:c[7]++;break;
				case 8:c[8]++;break;
				case 9:c[9]++;break;
			}
		}
	}
	max = c[0];
	for(i=0;i<10;i++)
	{
		if(c[i]>max)
		{
			max = c[i];
			k=i;
		}
	}
	printf("%d:",c[k]);
	for(i=0;i<10;i++){
		if(c[i]==max){
			printf(" %d",i);
		}
	}
	return 0;
}

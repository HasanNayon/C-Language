#include<stdio.h>
#include<string.h>
         int main(){
	int N, K;
	scanf("%d", &N);
	char name[N][10], gender[N], fixed_Phone[N][15], mobile_Phone[N][15];
	int year[N], month[N], day[N];
	for(int i = 0; i < N; i++)
        {
		scanf("%s %d/%d/%d %c %s %s", name[i], &year[i], &month[i], &day[i], &gender[i], fixed_Phone[i], mobile_Phone[i]);
	}
	scanf("%d", &K);
	int query[K];
	for(int i = 0; i < K; i++)
	{
		scanf("%d", &query[i]);
		if(query[i] < N)
		{
			printf("%s %s %c %d/%d/%d\n", name[query[i]], fixed_Phone[query[i]], gender[query[i]], year[query[i]], month[query[i]], day[query[i]]);
		}
		else{
			printf("Not Found\n");
		}
	}
	return 0;
}

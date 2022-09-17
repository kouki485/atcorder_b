#include <stdio.h>

int main()
{
	int N,c;
	int sum;

	scanf("%d",&N);
	c = N;
	sum = 0;
	while (N > 0)
	{
		sum += N % 10;
		N = N / 10;
	}
	if ((c % sum) == 0)
		printf("Yes\n");
	else
		printf("No\n");
	
	return (0);
}

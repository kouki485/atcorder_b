#include <stdio.h>

int main()
{
	int N;

	scanf("%d",&N);
	int a[N];

	for (int i = 0; i < N; i++)
		scanf("%d",&a[i]);

	int max = a[0];
	int min = a[0];
	for (int i = 1; i < N; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	printf("%d\n",max - min);
	return (0);

}
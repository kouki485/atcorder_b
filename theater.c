#include <libc.h>

int main()
{
	int N;
	int i,j,k;
	int res;

	scanf("%d",&N);
	for (i = 0; i < N; i++)
	{
		scanf("%d%d",&j,&k);
		res += k - j + 1;
	}
	printf("%d\n",res);
}
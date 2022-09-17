#include <stdio.h>

int main()
{
	long long int N;
	const int y = 998244353;

	scanf("%lld",&N);

	if (N < 0)
		N = -N;
	printf("%lld\n",N % y);
}
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	char str2[101];
	scanf("%s%s",str,str2);
	int x = strlen(str);
	char c;
	for (int i = 1;i <= x; i++)
	{
		for(int j = 0; j < x - 1; j++)
		{
			c = str[j + 1];
			str[j + 1] = str[j];
			str[j] = c;
		}
		if (!strcmp(str,str2))
		{
			printf("Yes\n");
			return (0);
		}
	}
	printf("No\n");
	return (0);
}

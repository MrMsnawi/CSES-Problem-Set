#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	long d = pow(10, 6);
	char s[d];
	int i;
	int count;
	int holder = 0;
	i = 0;

	scanf("%s", s);
	if (strlen(s) >= 1 && strlen(s) <= pow(10, 6))
	{
		while (s[i])
		{ 
			count = 1;
			while(s[i] == s[i + 1])
			{
				count++;
				i++;
			}
			if (count > holder)
				holder = count;
			if (s[i])
				i++;
		}
		printf("%d", holder);
	}
}

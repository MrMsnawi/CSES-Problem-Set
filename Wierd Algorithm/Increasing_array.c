#include <stdio.h>
#include <math.h>

int main()
{
	size_t n, size = (2 * pow(10, 5));
	size_t num[size];
	size_t temp, count = 0;

	scanf("%ld", &n);
	{
		for (size_t i = 0; i < n; i++)
		{
			scanf("%ld", &num[i]);
			if (!(num[i] >= 1 && num[i] <= pow(10, 9)))
				return 0;
		}
		for (size_t i = 1; i < n; i++)
		{
			if (num[i] < num[i-1])
			{
				temp = num[i-1] - num[i];
				num[i] += temp;
				count += temp;
			}
		}
		printf("%ld", count);
	}
}

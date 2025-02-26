#include <stdio.h>
#include <math.h>

int main()
{
	size_t n;
	size_t num;

	scanf("%ld", &n);
	size_t sum = (n * (n + 1)) / 2;
	if (n >= 2 && n <= (2 * pow(10, 5)))
	{
		size_t s = 0;
		for (int i = 0; i < n - 1; i++)
		{
			scanf("%ld", &num);
			s += num;
		}
		printf("%ld", sum - s);
	}
}

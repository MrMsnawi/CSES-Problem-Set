#include <stdio.h>
#include <math.h>

int main() {
    long n;

    scanf("%ld", &n);
    if (n >= 1 && n <= pow(10, 6))
    {
		printf("%ld ", n);
        while (n != 1)
		{
			if (n % 2 == 0)
				n = n / 2;
			else
				n = n * 3 + 1;
			printf("%ld ", n);
		}
    }
    return 0;
}

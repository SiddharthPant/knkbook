#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m, n, rem, p, q;

	printf("Enter a fraction: ");
	scanf("%d /%d", &m, &n);

	p = m;
	q = n;
	while (n != 0) {
		rem = m % n;
		m = n;
		n = rem;
	}
	p /= m;
	q /= m;

	printf("In lowest terms: %d/%d\n", p, q);

	return 0;
}
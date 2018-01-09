#include <stdio.h>

int main() {
	int var = (1 << 22);

	printf("before = %d\n", var);
	printf("after = %d\n", var & ~(1 << 22));
	return 0;
}

#include <stdio.h>
#include <limits.h>
void printb(unsigned int v) {
  unsigned int mask = (int)1 << (sizeof(v) * CHAR_BIT - 1);
  do putchar(mask & v ? '1' : '0');
  while (mask >>= 1);
}

void putb(unsigned int v) {
  putchar('0'), putchar('b'), printb(v), putchar('\n');
}

int main()
{
	int r = 200;
	int g = 100;
	int b = 50;

	printb(r);
	printf("\n");
	r = r << 8; //左シフト0011 << 2 = 1100
	printb(r);
	printf("\n");
	r = r | g;　//ビット論理和 1100 + 0011 = 1111
	printb(r);
	printf("\n");
	r = r << 8;
	printb(r);
	printf("\n");
	r = r | b;
	printb(r);
	printf("\n");
}

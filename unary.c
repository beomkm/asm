#include <stdio.h>

int main(void)
{
	int a, b;

	a = 5;
	b = a++;
	printf("b = a++;\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = ++a;
	printf("b = ++a;\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = a + (a++);
	printf("b = a + (a++);\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = (a++) + a;
	printf("b = (a++) + a;\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = a + (++a);
	printf("b = a + (++a);\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = (++a) + a;
	printf("b = (++a) + a;\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = (a++) + (a++);
	printf("b = (a++) + (a++);\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = (++a) + (++a);
	printf("b = (++a) + (++a);\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = (a++) + (++a);
	printf("b = (a++) + (++a);\n");
	printf("b=%d\n\n", b);

	a = 5;
	b = (++a) + (a++);
	printf("b = (++a) + (a++);\n");
	printf("b=%d\n\n", b);


	return 0;
}

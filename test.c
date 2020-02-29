#include <stdio.h>

int mystrcpy(char *dst, const char *src)
{
	if (dst == NULL || src == NULL)
		return -1;

	while (*dst++ = *src++)
		;

	return 0;
}

int main(int argc, const char **argv)
{
	char os[] = "FreeBSD";
	char *name = malloc(sizeof(os));

	if (mystrcpy(name, os))
	{
		printf("copy string failed, exit.");
		return -1;
	}

	printf("name of OS: %s\n", name);
	free(name);

	return 0;
}
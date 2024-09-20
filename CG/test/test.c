#include <stdbool.h>
#include <stdio.h>

int ft_strcmp(char* s1, char* s2)
{
	typedef unsigned char* uc;
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*(uc)s1 < *(uc)s2 ? -1 : 1);
		s1++;
		s2++;
	}
	return (*(uc)s1 < *(uc)s2 ? -1 : 1);
}

int		main(void)
{
	char a[] = "abc";
	char b[] = "abcd";
	printf("%d", ft_strcmp(a,b));
	return 0;
}
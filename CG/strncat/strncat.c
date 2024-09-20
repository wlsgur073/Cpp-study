#include <stdio.h>
#include <string.h>

unsigned int ft_strlen(char* str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}

unsigned int	ft_strlcat(char* dest, char* src, unsigned int size)
{
	char* r = NULL;

	if (ft_strlen(dest) > size)
		r = ft_strlen(src) + size;
	else if (ft_strlen(dest) <= size)
		r = ft_strlen(dest) + ft_strlen(src);
	
	if (ft_strlen(dest) < size)
		*dest = 0;

	return (char *) r;
}

int main()
{
	char a[] = "ABCDE";
	char b[] = "HELL";
	printf("%u\n", ft_strlcat(a, b ,0));
	return 0;
}
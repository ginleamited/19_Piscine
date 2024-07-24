int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_str_rev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char str[] = "Hello, World";

	printf("Original: %s\n", str);
	printf("Reversed: %s\n", ft_str_rev(str));

	return (0);
}

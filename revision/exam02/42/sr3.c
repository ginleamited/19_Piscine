int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrev (char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str [len];
		str [len] = tmp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char str [] = "asdjsaiodjasildojaaaaaaaa";
	printf("%s\n", str);
	printf("%s\n", ft_strrev(str));
	return (0);
}

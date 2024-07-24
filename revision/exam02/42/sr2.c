int strlen(*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = strlen(str) - 1;
	while( len > i )
	{
		tmp = str [i];
		str[i] = str [len]
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio>

int main()
{
	char str [] = "asdjklasjdklaaa"
	printf("%s\n", str);
	return (0);
}


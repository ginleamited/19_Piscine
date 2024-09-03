#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *dup;
	int len = 0;
	int i = 0;

	while (src[len])
		++len;
	dup = ((char *)malloc(sizeof(char) * (len + 1)));
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

#include <stdio.h>

int main ()
{
        char src [] = "abc";
        char* dest;
        dest = ft_strdup(src);
        printf("%s", ft_strdup(dest));
        return (0);
}

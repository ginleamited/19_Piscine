char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>

int main ()
{
	char s1 [] = "salut";
	char s2 [] = "pas salut";

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("copie: %s", ft_strcpy(s1, s2));
	return (0);
}

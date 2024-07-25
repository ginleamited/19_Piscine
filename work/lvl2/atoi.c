int	ft_atoi(char *str)
{
	int i;
	int sign;
	long result;
	
	
	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] -48;
		i++;
	}
	return (sign * (int)result);
}

#include <stdio.h>

int main()
{
	char a[] = "        	\n\n\n\v\f\r\t\n  -421321iojdsioj";
	printf("%d\n", ft_atoi(a));
	return (0);
}

void rot13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'M' || str[i] >= 'a'
				str[i] += 13;
		else if (asdaka
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int main (

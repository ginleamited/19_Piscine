#include <unistd.h>

int count(char c)
{
	int count;

	if (c >= 'A' && c <= 'Z')
		count = c - 'A' + 1;
	else if(c >= 'a' && c <= 'z')
		count = c - 'a' + 1;
	else
		count = 1;
	return (count);
}

int main (int ac, char **av)
{
	int count;

	if _

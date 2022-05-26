#include "ft_printf.h"

int	length(unsigned int nb, unsigned int d)
{
	int	i;

	i = 1;
	while (nb > d)
	{
		nb = nb / d;
		i++;
	}
	return (i);
}

char	*fill(char *s, unsigned int nb, unsigned int l)
{
	int	i;

	i = 0;
	while (nb >= l)
	{
		s[i] = nb % l + 48;
		i++;
		nb = nb / l;		
	}
	s[i++] = nb + 48;
	s[i] = '\0';
	return (s);
}

int	ft_putbase(unsigned int n, char *base)
{
	int	i;
	char	*s;
	int	j;
	int	p;
	unsigned int	l;

	l = 0;
	while (base[l])
		l++;
	i = 0;
	j = 0;
	p = 0;
	s = malloc(sizeof(char) * length(n, l) + 1);
	s = fill(s, n, l);
	while (s[j])
		j++;
	j--;	
	while(j >= 0)
	{
		p = s[j] - 48;
		i = i + write(1, &base[p], 1);
		j--;
	}
	free(s);
	return (i);
}
/*
int main()
{
	ft_putbase(0, "0123456789");
	return (0);
}
*/

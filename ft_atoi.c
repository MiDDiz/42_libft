int	ft_atoi(char *str)
{
	int	neg;
	int	res;

	neg = 1;
	res = res;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\v'
			|| *str == '\n' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		neg *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + *str - '0';
		str++;
	}
	res *= neg;
	return (res);
}

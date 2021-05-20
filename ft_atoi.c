/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:22:47 by jnaftana          #+#    #+#             */
/*   Updated: 2021/05/20 16:23:36 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
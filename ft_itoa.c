/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemur <atemur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:40:37 by atemur            #+#    #+#             */
/*   Updated: 2023/07/26 19:47:03 by atemur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	issign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	digit_counter(int n)
{
	int	nod;

	nod = 0;
	if (n < 0)
	{
		nod++;
		n = -n;
	}
	while (n != 0)
	{
		nod++;
		n /= 10;
	}
	return (nod);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		length;
	int		temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	temp = n;
	length = digit_counter(temp);
	string = (char *)malloc((length + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[length--] = '\0';
	if (temp < 0)
		temp = -temp;
	while (length >= 0)
	{
		string[length--] = (temp % 10) + '0';
		temp /= 10;
	}
	if (issign(n) == 1)
		string[0] = '-';
	return (string);
}

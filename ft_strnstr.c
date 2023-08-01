/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemur <atemur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:54:52 by atemur            #+#    #+#             */
/*   Updated: 2023/07/26 19:48:43 by atemur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	i = 0;
	j = 0;
	n_len = ft_strlen(needle);
	if (!needle || !*needle || n_len == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0' && haystack[i
				+ j] == needle[j] && i + j < len)
			j++;
		if (j == n_len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemur <atemur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 00:16:29 by atemur            #+#    #+#             */
/*   Updated: 2023/07/26 19:48:48 by atemur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	newlen;
	char	*newstr;

	start = 0;
	end = ft_strlen(s1);
	while (start < ft_strlen(s1) && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	newlen = end - start + 1;
	newstr = (char *)malloc((newlen) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1 + start, newlen);
	newstr[newlen - 1] = '\0';
	return (newstr);
}

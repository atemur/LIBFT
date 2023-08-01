/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemur <atemur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:51:38 by atemur            #+#    #+#             */
/*   Updated: 2023/07/26 19:48:29 by atemur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*cpy;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	cpy = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, len1 + len2 + 1);
	ft_strlcat(cpy, s2, len1 + len2 + 1);
	cpy[len1 + len2] = '\0';
	return (cpy);
}

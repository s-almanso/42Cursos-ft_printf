/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:36:22 by salmanso          #+#    #+#             */
/*   Updated: 2021/12/30 00:29:27 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haysack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haysack);
	while (haysack[i] != '\0' && i < len)
	{
		j = 0;
		while (haysack[i + j] == needle[j]
			&& haysack[i + j] != '\0' && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haysack + i));
			j++;
		}
		i++;
	}
	return (0);
}

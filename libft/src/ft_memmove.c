/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:34:23 by salmanso          #+#    #+#             */
/*   Updated: 2021/12/29 23:33:03 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			*((char *)dst + (len - 1)) = *((const char *)src + (len - 1));
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*((char *)dst + i) = *((const char *)src + i);
			i++;
		}
	}
	return (dst);
}

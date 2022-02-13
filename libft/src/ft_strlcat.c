/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:35:29 by salmanso          #+#    #+#             */
/*   Updated: 2021/12/29 23:51:07 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	d;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	d = len_dst;
	if (len_dst < (size - 1) && size > 0)
	{
		while (src[i] && (len_dst + i) < (size - 1))
		{
			dst[d] = src[i];
			d++;
			i++;
		}
		dst[d] = '\0';
	}
	if (len_dst >= size)
	{
		len_dst = size;
	}
	return (len_dst + len_src);
}

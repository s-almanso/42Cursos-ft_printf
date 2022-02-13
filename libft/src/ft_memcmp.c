/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:33:58 by salmanso          #+#    #+#             */
/*   Updated: 2021/12/29 21:33:29 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char ar[]="Start stop";
	char ar2[]="Start";

	if(ft_memcmp(ar, ar2, 11) == 0)
		printf("Arrays the same \n");
	else if (ft_memcmp(ar, ar2, 5) > 1 || ft_memcmp(ar, ar2, 5) < 1)
		printf("Arrays are diff \n");

	return 0;
}
*/

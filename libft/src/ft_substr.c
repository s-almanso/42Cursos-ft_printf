/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:38:32 by salmanso          #+#    #+#             */
/*   Updated: 2021/12/30 00:29:35 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	str_len;

	if (!s)
		return (0);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	else if (start + len > str_len)
		len = str_len - start;
	str = malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, (char *)(s + start), len + 1);
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char ar[]="Hello World!";
	char *tmp;

	tmp = ft_substr(ar, 6, 6);
	printf("%s\n", tmp);


	return 0;
}
*/

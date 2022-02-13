/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:37:37 by salmanso          #+#    #+#             */
/*   Updated: 2021/12/29 23:46:43 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *s, char c)
{
	size_t	int_len;

	int_len = 0;
	while (s[int_len] != '\0' && s[int_len] != c)
		int_len++;
	return (int_len);
}

char	**ft_split_words(char **dst, const char *s, const char c)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			word_len = ft_strclen(s, c);
			dst[i] = (char *)ft_calloc(word_len + 1, sizeof(char));
			if (!dst[i])
				return (NULL);
			ft_memcpy(dst[i], s, (size_t)word_len);
			s += word_len;
			i++;
		}
	}
	return (dst);
}

size_t	ft_counter(char const *s, char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s == c)
			word = 0;
		else if ((*s != c) && (word == 0))
		{
			word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	counter;
	char	**split_str;

	if (!s)
		return (0);
	counter = ft_counter(s, c);
	split_str = (char **)ft_calloc(counter + 1, sizeof(char *));
	if (!split_str)
		return (0);
	split_str = ft_split_words(split_str, s, c);
	return (split_str);
}

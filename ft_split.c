/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:53:04 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/26 18:27:08 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s && *s == c)
			s++;
		else
		{
			count ++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	*ft_make_word(char *word, char const *s, int j, int word_len)
{
	int	i;

	i = 0;
	while (word_len > 0)
	{
		word[i] = s[j - word_len];
		i++;
		word_len--;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_to_split(char **result, char const *s, char c, int word_num)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[j] && i < word_num)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_len++;
		}
		result[i] = (char *)calloc(sizeof(char), (word_len + 1));
		ft_make_word(result[i], s, j, word_len);
		word_len = 0;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		word_num;
	char	**result;

	if (*s == '\0')
		return (NULL);
	word_num = ft_word_count((char const *)s, c);
	result = (char **)malloc(sizeof (char *) * (word_num + 1));
	if (result == NULL)
		return (NULL);
	ft_to_split(result, s, c, word_num);
	return (result);
}

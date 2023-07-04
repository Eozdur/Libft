/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:18:14 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:43:51 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// stringimizi ayrac olarak belirlenen ifadeden kurtararak bi arraye atar
static int	wordcounter(const char *p, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*p)
	{
		if (*p != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*p == c)
			trigger = 0;
		p++;
	}
	return (i);
}

static char	*worddup(const char *s, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	int		a;
	int		start;

	if (!s)
		return (0);
	i = -1;
	a = 0;
	start = -1;
	split = malloc(sizeof(char *) * (wordcounter(s, c) + 1));
	if (!split)
		return (0);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[a++] = worddup(s, start, i);
			start = -1;
		}
	}
	split[a] = NULL;
	return (split);
}

/*
#include <stdio.h>

int	main()
{
	const char *a = "emre özdur 42 kocaeli";
	char b = ' ';
	
	char	**sonuc = ft_split(a, b);
	while (*sonuc)
	{
		printf("ft_:%s\n", *sonuc);
		sonuc++;
	}
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:27:22 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:44:21 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	kontrolet(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == s)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		k;
	int		len;

	i = 0;
	k = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && kontrolet(s1[i], set))
		i++;
	while (len > i && kontrolet(s1[len - 1], set))
		len--;
	str = (char *)malloc(sizeof(char) * (len - 1 + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[k++] = s1[i++];
	}
	str[k] = '\0';
	return (str);
}

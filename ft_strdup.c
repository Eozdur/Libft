/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:56:06 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:43:56 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*p;
	int		n;

	i = 0;
	n = ft_strlen(str);
	p = malloc(sizeof(char) * (n + 1));
	if (!p)
		return (NULL);
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "42 Kocaeli";
	printf("%s -> %s", src, ft_strdup(src));
}
*/
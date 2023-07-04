/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:48:39 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:43:31 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s1 ve s2 nin ilk n karakterini karşılaştırır
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	while (n > i)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char a[] = "123a";
	char b[] = "123A";
	char ft_a[] = "123a";
	char ft_b[] = "123A";
	printf("org:%d\n", memcmp(a, b, 4));
	printf("ft_:%d\n", ft_memcmp(ft_a, ft_b, 4));
}
*/
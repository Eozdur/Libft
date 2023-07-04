/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:49:27 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:44:14 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] == str2[i] && (str1[i] != '\0' || str2[i] != '\0'))
		i++;
	if (n <= i)
		return (0);
	else
		return (str1[i] - str2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *cp1 = "Bilgisayar";
	const char *cp2 = "Bilgileri";
	int ret;

	ret = ft_strncmp(cp1, cp2, 6);

	if (ret < 0)
		printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
	else if (ret > 0)
		printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
	else
		printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

	return (0);
}
*/
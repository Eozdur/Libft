/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:38:05 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:42:09 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// string olarak verilen "42" ifadesini int olan 42'ye çevirir
int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		res = (str[i] - 48) + (res * 10);
		i++;
	}
	return (res * s);
}

/*
#include <stdio.h>

int	main(void)
{
	char *dizi="-2461";
	printf("%d",ft_atoi(dizi));
}
*/
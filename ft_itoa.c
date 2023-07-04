/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:02:39 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:42:59 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int'i str'ye çevirme işlemi yapar

// static tutma sebebimiz değeri bir sonraki fonksiyonda tutabilmek
static int	kontrol(int sayi)
{
	int	n;

	if (sayi == '\0')
		return (1);
	n = 0;
	while (sayi < 0 || sayi > 0)
	{
		sayi /= 10;
		n++;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	long	i;
	int		uzunluk;
	char	*dizi;

	i = n;
	uzunluk = kontrol(i);
	if (n < 0)
	{
		uzunluk++;
		i = -i;
	}
	dizi = malloc(sizeof(char) * uzunluk + 1);
	if (!dizi)
		return (NULL);
	dizi[uzunluk] = '\0';
	while (i > 0)
	{
		dizi[--uzunluk] = i % 10 + '0';
		i /= 10;
	}
	if (n < 0)
		dizi[0] = '-';
	if (n == 0)
		dizi[0] = '0';
	return (dizi);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Int min: %s\n", ft_itoa(-2147483648));
	printf("Int max: %s\n", ft_itoa(2147483647));
	printf("Zero: %s\n", ft_itoa(0));
	printf("Positive: %s\n", ft_itoa(1));
	printf("Negative : %s\n", ft_itoa(-1));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:51:10 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:43:39 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// c karakterini baştan len byte kadar b'ye kopyalar
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    char cdizi[] = "Bilgisayar";

    printf("%s\n", cdizi);

    memset(cdizi, 'c', 5);

    printf("%s", cdizi);

    return 0;
}
*/
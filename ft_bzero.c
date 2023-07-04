/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:19:08 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 23:30:46 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s stringinin başından n kadar null yazdırır \0
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
int	main(void)
{
	char	deneme[6] = "emre";
	printf("before : %s\n, ", deneme);
	ft_bzero(deneme, sizeof(deneme));
	printf("after : %s", deneme);
}
*/
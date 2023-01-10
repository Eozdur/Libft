/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <ozduremre06@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:01:56 by eozdur            #+#    #+#             */
/*   Updated: 2022/12/13 14:15:47 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s'yi c'den itibaren c dahil sonuna kadar yazdıran fonksiyon
#include "libft.h"

char	*ft_strchr(const char *str, int c)

{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)(str + i));
	return (NULL);
}

/*
#include <stdio.h>

int	main()
{
	char a[] = "ankara";
	
	printf("ft_:%s", ft_strchr(a, 'a'));
}
*/
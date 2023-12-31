/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:28:59 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:29:02 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int main()
// {
// 	char str[10] = "kocaeli";
// 	char dst[10];
// 	// printf("%s",(char *)ft_memcpy(str+2,str,4)); //(overlap durumu vardır.)
	
// 	ft_memcpy(dst,str,7);
// 	printf("%s",dst);
// }

// "src" parametresi ile gösterilen bellek bölgesindeki karakterleri,
// "n" parametre değeri kadar uzunlukta, "dst" parametresindeki
// bellek bölgesine kopyalar.

// Sadece 33. ve 35. satırları 
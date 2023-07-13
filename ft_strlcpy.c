/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:31:34 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:31:35 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen (src));
}

// #include <stdio.h>

// int main()
// {
// 	char dest[] = "Merhaba";
// 	char src[] = "42Kocaeli";

// 	printf("%zu",ft_strlcpy(dest,src,4));
// }

// "src" parametresinden gelen karakter dizisini "n" parametresindeki
// değer kadar "dest" parametresinden gelen diziye kopyalar
// ve src'nin uzunluğunu döndürür.

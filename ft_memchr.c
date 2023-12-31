/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:28:41 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:28:44 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*(str++) == (unsigned char )c)
			return ((void *)(str - 1));
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char *s = "42Kocaeli";
// 	printf("%s", (char *)ft_memchr(s,'a',6));
// }

// "s" parametresi ile gösterilen bellek bölgesinin "n" parametre değeri kadar
// ilk byte'ında "c" parametresi ile gösterilen değerin (unsigned char olarak
// değerlendirilir) ilk geçtiği yeri arar ve bu bellek adresini gösteren
// bir işaretçi geri döndürür.



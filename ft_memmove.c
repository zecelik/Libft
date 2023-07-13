/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:29:08 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:29:12 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
	{
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	return (dst);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "kocaeli";

// 	printf("%s",(char *)ft_memmove(str+2,str,3));
// }

// Memcopy ile aynı işlevi yapar fakat 
// bellekte overlop olmaması için tersten kopyalar.

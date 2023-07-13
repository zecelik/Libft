/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:29:19 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:29:21 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

// #include <stdio.h>

// int	main(){

// 	char dizi[] = "Merhaba42";
// 	printf("%s",(char *)ft_memset(dizi,'c',3));

//     return 0;
// }

// "c" parametresi ile gösterilen bellek bölgesindeki karakteri dest
// parametresindeki bellek bölgesinin ilk "n" parametre değeri kadar byte'ına
// kopyalar.
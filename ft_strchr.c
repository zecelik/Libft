/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:30:56 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:30:58 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Merhaba42";
// 	printf("%s",ft_strchr(str,'b'));

// }

// "s" parametresi ile gösterilen karakter dizisinde "c" parametresi ile
// gösterilen değerin (unsigned char olarak değerlendirilir) ilk geçtiği
// yeri arar ve bu bellek adresini gösteren bir işaretçi geri döndürür.

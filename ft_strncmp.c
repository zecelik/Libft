/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:31:59 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:32:03 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "42Merhaba";
// 	char s2[] = "42Kocaeli";
// 	printf("%d",ft_strncmp(s1,s2,2)); 
// }

// "s1" parametresi ve "s2" parametresi (iki string değeri)
// "n" değeri kadar karşılaştırılır.
// Aynı ise 0 değeri farklı ise 0'dan farklı bir değer girilir. 
// NUll karakter gördüğü zaman durur.

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:31:51 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:31:56 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// #include <stdio.h>

// char	ft_42(unsigned int a,char c)
// {
// 	return(ft_toupper(c));
// }

// int main()
// {
// 	char s[] = "merhaba";
// 	char *str;
// 	str = ft_strmapi(s,ft_42);

// 	printf("%s",str);
// }

// ft_calloc fonksiyonu ile bellekte yer açılır ve "s" parametresinden gelen
// karakter dizisinin her indisine "f" parametresindeki fonksiyon uygulanır.

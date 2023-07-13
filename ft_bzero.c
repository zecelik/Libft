/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:26:12 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:26:21 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <stdio.h>

// int	main(void)
// {
// 	int i;
// 	char str[] = "zehracelik";
// 	i = ft_strlen(str);
// 	ft_bzero(str, 4);
// 	write(1,&str,i);
// 	return 0;
// }

// Parametreden gelen "s" dizisine n kadar null değer atar.
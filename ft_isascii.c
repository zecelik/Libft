/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:26:55 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:26:59 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d",ft_isascii('8'));
// }

// Fonksiyona girilen parametrenin ascii değer aralığında 
// olup olmadığını döndürür. (0 veya 1 şeklinde)
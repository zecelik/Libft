/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:27:09 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:27:12 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d",ft_isprint('\0'));
// }

// Fonksiyona girilen parametrenin ekrana
// yazılıp yazılmadığını döndürür.(0 veya 1 şeklinde)
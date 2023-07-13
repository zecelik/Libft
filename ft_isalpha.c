/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:26:48 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:26:49 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d",ft_isalpha('B'));
// }

// Fonksiyona girilen parametrenin alfabetik karakter olup olmadığını döndürür.
// (0 veya 1 şeklinde)
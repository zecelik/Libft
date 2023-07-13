/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:26:40 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:26:42 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d",ft_isalnum('A'));
// }

// Fonksiyona girilen parametrenin alfanumerik karakter olup olmadığını
// döndürür. (0 veya 1 şeklinde)
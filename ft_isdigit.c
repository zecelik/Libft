/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:27:02 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:27:04 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d",ft_isdigit('8'));
// }

// Fonksiyona girilen parametrenin rakam 
// olup olmadığını döndürür.(0 veya 1 şeklinde)
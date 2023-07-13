/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:29:25 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:30:35 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/fcelik/Desktop/test.txt",O_WRONLY);
// 	ft_putchar_fd('S',fd);
// }

// Belirtilen dosya tanımlayıcısına (fd) "c" parametresinden gelen
// karakteri yazar.
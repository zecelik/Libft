/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:30:06 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:30:13 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

//#include <fcntl.h>

// int main()
// {
//     int fd= open("/Users/fcelik/Desktop/test.txt",1);
//     ft_putstr_fd("Merhaba 42 Kocaeli",fd);
// }

// Belirtilen dosya tanımlayıcısına (fd) "s" parametresinden gelen
// char dizisi yazılır.
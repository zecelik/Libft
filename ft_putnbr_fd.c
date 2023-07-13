/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:30:00 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/13 16:30:21 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (nb * -1);
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}

//#include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/fcelik/Desktop/test.txt",O_WRONLY);
// 	ft_putstr_fd("Merhaba ",fd);
// 	ft_putnbr_fd(42,fd);
// 	ft_putstr_fd(" Kocaeli",fd);
// }

// n parametresine girilen int değeri fd dosyasına yazar.
// // Belirtilen dosya tanımlayıcısına (fd) "n" parametresinden gelen
// int değer yazılır.
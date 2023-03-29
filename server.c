/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:50:27 by daboyer           #+#    #+#             */
/*   Updated: 2023/03/29 12:50:19 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_message(int sig)
{
	static char		c;
	static int		i;

	if (sig == SIGUSR1)
		c = c | (128 >> i);
	i++;
	if (i == 8)
	{
		if (c == '\0')
		{
			ft_putchar_fd('\n', 1);
			exit(0);
		}
		ft_putchar_fd(c, 1);
		c = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, print_message);
	signal(SIGUSR2, print_message);
	while (1)
		pause();
	return (0);
}

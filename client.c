/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:49:53 by daboyer           #+#    #+#             */
/*   Updated: 2023/03/29 12:52:42 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_message(int pid, char *message)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (message[i])
	{
		c = message[i];
		j = 0;
		while (j < 8)
		{
			if (c & 128)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			c = c << 1;
			j++;
			usleep(1000);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int		pid;

	if (ac != 3)
	{
		ft_putstr_fd("Usage: ./client [server PID] [message] ", 2);
		return (0);
	}
	pid = ft_atoi(av[1]);
	send_message(pid, av[2]);
	return (0);
}

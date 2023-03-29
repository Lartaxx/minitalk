/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:48:01 by daboyer           #+#    #+#             */
/*   Updated: 2022/12/06 21:19:06 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int character)
{
	if (character >= 48 && character <= 57)
		return (1);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d", ft_isdigit('d'));
// }
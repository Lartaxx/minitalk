/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:06:00 by daboyer           #+#    #+#             */
/*   Updated: 2022/12/06 21:12:47 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int character)
{
	if (character >= 97 && character <= 122)
		character -= 32;
	return (character);
}

// #include <stdio.h>

// int		main(void)
// {
// 	printf("%d", ft_toupper('d'));
// }
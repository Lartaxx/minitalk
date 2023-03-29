/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:52:46 by daboyer           #+#    #+#             */
/*   Updated: 2022/12/06 21:18:55 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if (character >= 48 && character <= 57)
		return (1);
	else if (character >= 65 && character <= 90)
		return (1);
	else if (character >= 97 && character <= 122)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d", ft_isalnum('6'));
// }
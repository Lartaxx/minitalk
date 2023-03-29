/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:36:15 by daboyer           #+#    #+#             */
/*   Updated: 2022/12/06 21:18:59 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int character)
{
	if (character >= 65 && character <= 90)
		return (1);
	else if (character >= 97 && character <= 122)
		return (1);
	return (0);
}

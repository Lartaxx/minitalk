/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:59:29 by daboyer           #+#    #+#             */
/*   Updated: 2022/12/06 21:19:02 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int character)
{
	if (character >= 0 && character <= 127)
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:39:27 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/13 14:37:04 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (((char *)s1)[i] && ((char *)s1)[i] == ((char *)s2)[i] && n--)
		i++;
	if (!n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

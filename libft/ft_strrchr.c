/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:35:57 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/13 12:35:13 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last);
}

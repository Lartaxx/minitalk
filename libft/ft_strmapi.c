/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <daboyer@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:55:27 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/17 21:55:39 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*n;

	i = ft_strlen(s);
	n = malloc((i + 1) * sizeof(char));
	if (!n)
		return (0);
	i = -1;
	while (s[++i])
		n[i] = (*f)((unsigned int) i, s[i]);
	n[i] = 0;
	return (n);
}

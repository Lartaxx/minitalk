/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:32:34 by daboyer           #+#    #+#             */
/*   Updated: 2023/02/17 16:32:42 by daboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	size_t	len;
	char	*nx;

	if (!s1)
		return ((char *)s2);
	else if (!s2)
		return ((char *)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	nx = malloc((len + 1) * sizeof(char));
	if (!nx)
		return (0);
	i = 0;
	k = 0;
	while (s1[k] && i < len)
		nx[i++] = s1[k++];
	k = 0;
	while (s2[k] && i < len)
		nx[i++] = s2[k++];
	nx[i] = 0;
	return (nx);
}

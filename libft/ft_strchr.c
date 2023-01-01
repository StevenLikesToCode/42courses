/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:51:20 by suchen            #+#    #+#             */
/*   Updated: 2022/04/03 16:02:02 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*fin;

	i = 0;
	fin = (char *)s;
	if (c == '\0')
	{
		while (fin[i] != '\0')
			i++;
		return (&fin[i]);
	}
	while ((fin[i] != '\0') && (fin[i] != c))
		i++;
	if (fin[i] == '\0')
		return (NULL);
	return (&fin[i]);
}

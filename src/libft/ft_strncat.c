/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetrovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 17:20:50 by mpetrovy          #+#    #+#             */
/*   Updated: 2017/12/17 14:44:24 by mpetrovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	while (n > 0 && s2[j] != '\0')
	{
		s1[i++] = s2[j++];
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
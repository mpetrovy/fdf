/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetrovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:07:22 by mpetrovy          #+#    #+#             */
/*   Updated: 2017/11/03 19:16:29 by mpetrovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 90 && c >= 65) || (c <= 57 && c >= 48))
		return (1);
	else
		return (0);
}
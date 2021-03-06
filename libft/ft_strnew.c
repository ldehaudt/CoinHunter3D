/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 21:06:55 by cwu               #+#    #+#             */
/*   Updated: 2018/04/16 21:06:56 by cwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *t;
	char *u;

	if (!(t = (char *)malloc(size + 1)))
		return (NULL);
	u = t;
	while (size--)
		*u++ = '\0';
	*u = '\0';
	return (t);
}

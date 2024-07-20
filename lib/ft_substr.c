/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:36:25 by grey              #+#    #+#             */
/*   Updated: 2024/07/20 16:40:23 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	a = (char *)malloc(len * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	while (start-- && *s)
		s++;
	i = 0;
	while (i < len)
	{
		a[i] = s[i];
		i++;
	}
	return (a);
}

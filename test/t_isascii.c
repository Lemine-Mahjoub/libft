/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isascii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:05:11 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 13:11:43 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <ctype.h>

void	t_isascii(void)
{
	int	i;

	i = 0;
	while (i < 129)
	{
		assert(ft_isascii(i) == isascii(i));
		i++;
	}
	printf("ft_isascii: OK\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:15:17 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 13:16:50 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <ctype.h>

void	t_isprint(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		assert(ft_isprint(i) == isprint(i));
		i++;
	}
	printf("ft_isprint: OK\n");
}

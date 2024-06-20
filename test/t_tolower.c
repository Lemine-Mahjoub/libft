/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tolower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:21:18 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 13:28:01 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <ctype.h>

void	t_tolower(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		assert(ft_tolower(i) == tolower(i));
		i++;
	}
	printf("ft_tolower: OK\n");
}

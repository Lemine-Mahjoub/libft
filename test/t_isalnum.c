/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:32:09 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 12:33:37 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <ctype.h>

void	t_isalnum(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		assert(ft_isalnum(i) == isalnum(i));
		i++;
	}
	printf("ft_isalnum: OK\n");
}

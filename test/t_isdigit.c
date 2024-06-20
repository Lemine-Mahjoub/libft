/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isdigit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:29:34 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 12:30:46 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <ctype.h>

void	t_isdigit(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		assert(ft_isdigit(i) == isdigit(i));
		i++;
	}
	printf("ft_isdigit: OK\n");
}

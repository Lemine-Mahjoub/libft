/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_toupper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:32:38 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 13:33:14 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <ctype.h>

void	t_toupper(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		assert(ft_toupper(i) == toupper(i));
		i++;
	}
	printf("ft_toupper: OK\n");
}

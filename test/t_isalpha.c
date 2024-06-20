/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:01:22 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 12:28:41 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <ctype.h>

void	t_isalpha(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		assert(ft_isalpha(i) == isalpha(i));
		assert(ft_isupper(i) == isupper(i));
		assert(ft_islower(i) == islower(i));
		i++;
	}
	printf("ft_isalpha: OK\n");
	printf("ft_isupper: OK\n");
	printf("ft_islower: OK\n");
}

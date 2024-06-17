/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_bzero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:05:38 by grey              #+#    #+#             */
/*   Updated: 2024/06/17 14:11:23 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "../lib/libft.h"
#include <stdio.h>

void	t_bzero(void)
{
	char	str[5];

	ft_memset(str, 'a', 5);
	ft_bzero(str, 5);
	assert(str[0] == 0);
	assert(str[4] == 0);
	printf("ft_bzero -> OK\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:28:08 by grey              #+#    #+#             */
/*   Updated: 2024/06/14 13:41:33 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include <assert.h>
#include <stdio.h>

void	t_isprint(void)
{
	assert(ft_isprint(' ') == 1);
	assert(ft_isprint('!') == 1);
	assert(ft_isprint('0') == 1);
	assert(ft_isprint(9) == 0);
	assert(ft_isprint('a') == 1);
	assert(ft_isprint('Z') == 1);
	assert(ft_isprint(0x02) == 0);
	assert(ft_isprint('\n') == 0);
	printf("ft_isprint -> OK\n");
}

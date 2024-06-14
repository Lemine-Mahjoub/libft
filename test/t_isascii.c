/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isascii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:15:09 by grey              #+#    #+#             */
/*   Updated: 2024/06/14 13:20:49 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include <assert.h>
#include <stdio.h>

void	t_isascii(void)
{
	assert(ft_isascii(' ') == 1);
	assert(ft_isascii('9') == 1);
	assert(ft_isascii('a') == 1);
	assert(ft_isascii('!') == 1);
	printf("ft_isascii -> OK\n");
}

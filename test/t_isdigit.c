/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isdigit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:07:14 by grey              #+#    #+#             */
/*   Updated: 2024/06/14 13:08:31 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include <assert.h>
#include <stdio.h>

void	t_isdigit(void)
{
	assert(ft_isdigit('0') == 1);
	assert(ft_isdigit('9') == 1);
	assert(ft_isdigit('a') == 0);
	assert(ft_isdigit('Z') == 0);
	assert(ft_isdigit(' ') == 0);
	assert(ft_isdigit('!') == 0);
	assert(ft_isdigit(1) == 0);
	assert(ft_isdigit(9) == 0);
	printf("ft_isdigit -> OK\n");
}

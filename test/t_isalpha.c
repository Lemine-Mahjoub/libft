/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 03:05:14 by grey              #+#    #+#             */
/*   Updated: 2024/06/11 07:11:50 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include <assert.h>
#include <stdio.h>

void	t_isalpha(void)
{
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('1') == 0);
	assert(ft_isalpha(' ') == 0);
	assert(ft_isalpha('!') == 0);
	assert(ft_isalpha(1) == 0);
	assert(ft_isalpha(9) == 0);
	printf("ft_isalpha -> OK\n");
}

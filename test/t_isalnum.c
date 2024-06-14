/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:11:39 by grey              #+#    #+#             */
/*   Updated: 2024/06/14 13:12:54 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "../lib/libft.h"
#include <stdio.h>

void	t_isalnum(void)
{
	assert(ft_isalnum('0') == 1);
	assert(ft_isalnum('9') == 1);
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('Z') == 1);
	assert(ft_isalnum('1') == 1);
	assert(ft_isalnum(' ') == 0);
	assert(ft_isalnum('!') == 0);
	assert(ft_isalnum(1) == 0);
	assert(ft_isalnum(9) == 0);
	printf("ft_isalnum -> OK\n");
}

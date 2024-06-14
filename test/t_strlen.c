/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:50:11 by grey              #+#    #+#             */
/*   Updated: 2024/06/14 13:57:35 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include <assert.h>
#include <stdio.h>

void	t_strlen(void)
{
	assert(ft_strlen("Hello") == 5);
	assert(ft_strlen("Hello World") == 11);
	assert(ft_strlen("Hello World!") == 12);
	assert(ft_strlen("") == 0);
	assert(ft_strlen(" ") == 1);
	printf("ft_strlen -> OK\n");
}

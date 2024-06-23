/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:36:34 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 13:05:21 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>

void	t_strlen(void)
{
	char	*str;

	str = "Hello, World!";
	assert(ft_strlen(str) == 13);
	assert(ft_strlen(str) == strlen(str));
	str = "";
	assert(ft_strlen(str) == 0);
	assert(ft_strlen(str) == strlen(str));
	str = "\n\t\v\f\r";
	assert(ft_strlen(str) == 5);
	assert(ft_strlen(str) == strlen(str));
	printf("ft_strlen: OK\n");
}

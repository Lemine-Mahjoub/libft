/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:17:30 by grey              #+#    #+#             */
/*   Updated: 2024/06/17 13:39:14 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"

void	t_memset(void)
{
	char	str[2];

	ft_memset(str, 'a', 5);
	assert(str[0] == 'a');
	ft_memset(str, 'b', 5);
	assert(str[4] == 'b');
	printf("ft_memset -> OK\n");
}

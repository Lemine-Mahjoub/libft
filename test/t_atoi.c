/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:13:36 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 13:16:43 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "test.h"
#include "../lib/libft.h"

void	t_atoi(void)
{
	assert(ft_atoi("42") == atoi("42"));
	assert(ft_atoi("42") == 42);
	printf("ft_atoi: OK\n");
}

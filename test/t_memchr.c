/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 09:48:07 by grey              #+#    #+#             */
/*   Updated: 2024/06/22 09:50:40 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_memchr(void)
{
	char	*str;

	str = malloc(sizeof(char) * 13);
	strcpy(str, "Hello World");
	assert(ft_memchr(str, 'W', 13) == memchr(str, 'W', 13));
	assert(ft_memchr(str, 'H', 13) == memchr(str, 'H', 13));
	assert(ft_memchr(str, 'i', 13) == memchr(str, 'i', 13));
	assert(ft_memchr(str, '!', 13) == memchr(str, '!', 13));
	printf("ft_memchr: OK\n");
}

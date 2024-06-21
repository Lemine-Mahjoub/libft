/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:47:23 by grey              #+#    #+#             */
/*   Updated: 2024/06/21 09:57:59 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_memcpy(void)
{
	char	*str;
	char	*str2;

	str = malloc(sizeof(char) * 13);
	strcpy(str, "Hello World");
	str2 = malloc(sizeof(char) * 13);
	strcpy(str2, "World Hello");
	assert(strcmp(ft_memcpy(str, str2, 5), memcpy(str, str2, 5)) == 0);
	assert(ft_memcpy(str, str2, 2) == memcpy(str, str2, 2));
	assert(strcmp(ft_memcpy(str, str2, 10), memcpy(str, str2, 10)) == 0);
	assert(strcmp(ft_memcpy(str, str2, 13), memcpy(str, str2, 13)) == 0);
	assert(strcmp(ft_memcpy(str, str2, 0), memcpy(str, str2, 0)) == 0);
	free(str);
	free(str2);
	printf("ft_memcpy: OK\n");
}

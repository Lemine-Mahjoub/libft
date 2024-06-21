/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:15:50 by grey              #+#    #+#             */
/*   Updated: 2024/06/21 10:23:16 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_memmove(void)
{
	char	*str;
	char	*str2;
	char	*str3;
	char	*str4;

	str = malloc(sizeof(char) * 13);
	strcpy(str, "Hello World");
	str2 = malloc(sizeof(char) * 13);
	strcpy(str2, "World Hello");
	str3 = malloc(sizeof(char) * 13);
	strcpy(str3, "Hello World");
	str4 = malloc(sizeof(char) * 13);
	strcpy(str4, "World Hello");
	assert(memcmp(ft_memcpy(str, str2, 5), memcpy(str3, str4, 5), 5) == 0);
	assert(strcmp(str, str3) == 0);
	assert(strcmp(str2, str4) == 0);
	printf("ft_memcpy: OK\n");
}

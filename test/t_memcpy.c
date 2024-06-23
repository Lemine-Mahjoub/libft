/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:47:23 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 13:05:54 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../lib/libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_memcpy(void)
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
	free(str);
	free(str2);
	free(str3);
	free(str4);
	printf("ft_memcpy: OK\n");
}

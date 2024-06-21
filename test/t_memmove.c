/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:15:50 by grey              #+#    #+#             */
/*   Updated: 2024/06/21 11:00:11 by grey             ###   ########.fr       */
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
	assert(memcmp(ft_memmove(str, str2, 6), memmove(str3, str4, 6), 13) == 0);
	assert(strcmp(str, str3) == 0);
	assert(strcmp(str2, str4) == 0);
	printf("ft_memmove: OK\n");
}

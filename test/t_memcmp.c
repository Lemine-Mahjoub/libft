/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:32:03 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 13:05:59 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../lib/libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_memcmp(void)
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
	assert(ft_memcmp(str, str2, 13) == memcmp(str, str2, 13));
	assert(ft_memcmp(str, str3, 13) == memcmp(str, str3, 13));
	assert(ft_memcmp(str, str3, 13) == 0);
	assert(ft_memcmp(str2, str4, 13) == 0);
	assert(ft_memcmp(str, str2, 13) == ft_memcmp(str3, str4, 13));
	free(str);
	free(str2);
	free(str3);
	free(str4);
	printf("ft_memcmp: OK\n");
}

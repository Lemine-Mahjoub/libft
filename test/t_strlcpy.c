/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:53:32 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 11:58:13 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_strlcpy(void)
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
	assert(ft_strlcpy(str, str2, 13) == 11);
	assert(strcmp(str, str2) == 0);
	assert(ft_strlcpy(str4, str2, 13) == 11);
	assert(strcmp(str4, str2) == 0);
	printf("ft_strlcpy: OK\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:32:46 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 13:13:23 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_strncmp(void)
{
	char	*str1;
	char	*str2;

	str1 = malloc(sizeof(char) * 13);
	str2 = malloc(sizeof(char) * 13);
	strcpy(str1, "Hello World");
	strcpy(str2, "Foo Bar");
	assert(ft_strncmp(str1, str2, 8) == strncmp(str1, str2, 8));
	assert(ft_strncmp(str1, str2, 10) == strncmp(str1, str2, 10));
	strcpy(str2, "Hello World");
	assert(ft_strncmp(str1, str2, 5) == strncmp(str1, str2, 5));
	strcpy(str2, "Hello Bar");
	assert(ft_strncmp(str1, str2, 6) == strncmp(str1, str2, 6));
	assert(ft_strncmp(str1, str2, 10) == strncmp(str1, str2, 10));
	free(str1);
	free(str2);
	printf("ft_strncmp: OK\n");
}

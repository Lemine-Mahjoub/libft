/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:16:36 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 15:11:48 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_memset(void)
{
	char	*str;
	char	*str2;

	str = malloc(sizeof(char) * 13);
	strcpy(str, "Hello World!");
	str2 = malloc(sizeof(char) * 13);
	strcpy(str2, "Hello World!");
	ft_memset(str, 'a', 5);
	memset(str2, 'a', 5);
	assert(strcmp(str, str2) == 0);
	assert(ft_memset(str, 'a', 10) == memset(str, 'a', 10));
	assert(ft_memset(str, '\n', 10) == memset(str, '\n', 10));
	assert(ft_memset(str, '\0', 10) == memset(str, '\0', 10));
	free(str);
	free(str2);
	printf("ft_memset: OK\n");
}

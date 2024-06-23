/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:42:04 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 12:44:20 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_strnstr(void)
{
	char	*str1;
	char	*str2;

	str1 = malloc(sizeof(char) * 13);
	str2 = malloc(sizeof(char) * 13);
	strcpy(str1, "Hello World");
	strcpy(str2, "World");
	assert(ft_strnstr(str1, str2, 13) == str1 + 6);
	strcpy(str2, "Hello");
	assert(ft_strnstr(str1, str2, 13) == str1);
	strcpy(str2, "Bar");
	assert(ft_strnstr(str1, str2, 13) == NULL);
	strcpy(str2, "World");
	assert(ft_strnstr(str1, str2, 5) == NULL);
	printf("ft_strnstr: OK\n");
}

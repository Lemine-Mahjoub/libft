/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:05:18 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 13:05:37 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_strlcat(void)
{
	char	*str;
	char	*str2;
	char	*str3;

	str = malloc(sizeof(char) * 13);
	strcpy(str, "Hello World");
	str2 = malloc(sizeof(char) * 9);
	strcpy(str2, "Foo Bar");
	str3 = malloc(sizeof(char) * 13);
	strcpy(str3, "Hello World");
	assert(ft_strlcat(str, str2, 19) == 18);
	assert(strcmp(str, "Hello WorldFoo Bar") == 0);
	free(str);
	free(str2);
	free(str3);
	printf("ft_strlcat: OK\n");
}

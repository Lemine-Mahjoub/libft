/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_calloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:03:13 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 13:04:25 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	t_calloc(void)
{
	char	*str1;
	char	*str2;

	str1 = ft_calloc(13, sizeof(char));
	str2 = calloc(13, sizeof(char));
	strcpy(str1, "Hello World");
	strcpy(str2, "Hello World");
	assert(strcmp(str1, str2) == 0);
	free(str1);
	free(str2);
	printf("ft_calloc: OK\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_bzero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:18:01 by grey              #+#    #+#             */
/*   Updated: 2024/06/20 15:22:48 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_bzero(void)
{
	char	*str;
	char	*str2;

	str = malloc(sizeof(char) * 13);
	strcpy(str, "Hello World!");
	str2 = malloc(sizeof(char) * 13);
	strcpy(str2, "Hello World!");
	ft_bzero(str, 5);
	bzero(str2, 5);
	assert(strcmp(str, str2) == 0);
	ft_bzero(str, 15);
	free(str);
	free(str2);
	printf("ft_bzero: OK\n");
}

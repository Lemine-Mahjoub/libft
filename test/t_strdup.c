/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:09:32 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 13:09:48 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_strdup(void)
{
	char	*str;
	char	*str2;

	str = ft_strdup("Hello World");
	str2 = strdup("Hello World");
	assert(strcmp(str, str2) == 0);
	free(str);
	free(str2);
	printf("ft_strdup: OK\n");
}

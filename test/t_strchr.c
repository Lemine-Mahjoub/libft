/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:26:10 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 12:26:51 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void	t_strchr(void)
{
	char	*str;

	str = malloc(sizeof(char) * 13);
	strcpy(str, "Hello World");
	assert(ft_strchr(str, 'W') == strchr(str, 'W'));
	assert(ft_strchr(str, 'o') == strchr(str, 'o'));
	assert(ft_strchr(str, 'z') == strchr(str, 'z'));
	printf("ft_strchr: OK\n");
}

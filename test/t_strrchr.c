/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:28:45 by grey              #+#    #+#             */
/*   Updated: 2024/06/23 12:29:17 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdio.h>
#include "../lib/libft.h"
#include <assert.h>
#include <string.h>

void	t_strrchr(void)
{
	char	*str;

	str = "Hello World";
	assert(ft_strrchr(str, 'l') == strrchr(str, 'l'));
	assert(ft_strrchr(str, 'o') == strrchr(str, 'o'));
	assert(ft_strrchr(str, 'z') == strrchr(str, 'z'));
	printf("ft_strrchr: OK\n");
}

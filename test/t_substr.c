/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_substr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:31:25 by grey              #+#    #+#             */
/*   Updated: 2024/07/21 13:36:49 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../lib/libft.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

void t_substr(void){
	char *a = malloc(sizeof(char) * 10);
	a = ft_substr("Hello World", 3, 20);
	assert(1 == 1);
	printf("%s", a);
}
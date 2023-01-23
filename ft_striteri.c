/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:37:01 by shimomayuda       #+#    #+#             */
/*   Updated: 2023/01/23 16:41:43 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL)
		return ((void)0);
	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int)i, s);
		s++;
		i++;
	}
}

void ft_test(unsigned int x, char* src)
{
	if (x == 0)
		src[0] = '3';
}

#include <stdio.h>
int	main(void)
{
	char	src[] = "";

	ft_striteri(src, &ft_test);
	printf("%s", src);
	return (0);
}

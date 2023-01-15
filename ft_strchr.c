/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:33:16 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 13:55:42 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 文字列の先頭から「文字」を検索して見つかった場所をポインタで返します。
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[20] = "abcdefghijk";
// 	char	*p;
// 	char	*x;

// 	p = strchr((const char *)test, 'f');
// 	printf("検索文字が見つかった場所から表示→%s\n", p);
// 	x = ft_strchr((const char *)test, 'f');
// 	printf("検索文字が見つかった場所から表示→%s\n", x);
// 	return (0);
// }

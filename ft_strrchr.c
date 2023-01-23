/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:22:56 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/23 17:21:26 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 文字列の「最後」から「文字」を検索して見つかった場所をポインタで返します。
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (c == 0)
		return ("\0");
	if (c > 255)
		c -= 256;
	if (c < 0)
		c += 256;
	i = ft_strlen((char *)s);
	while (i)
	{
		if (s[i - 1] == (char)c)
			return ((char *)&s[i - 1]);
		i--;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[20] = "123456311";
// 	char	*p;
// 	char	*x;

// 	p = strrchr((const char *)test, '3');
// 	printf("検索文字が見つかった場所から表示→%s\n", p);
// 	x = ft_strrchr((const char *)test, '3');
// 	printf("検索文字が見つかった場所から表示→%s\n", x);
// 	return (0);
// }

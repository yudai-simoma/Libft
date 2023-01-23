/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:33:16 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/23 17:21:42 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

/*
** 文字列の先頭から「文字」を検索して見つかった場所をポインタで返します。
*/
char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
		return ("\0");
	if (c > 255)
		c -= 256;
	if (c < 0)
		c += 256;
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}

// int	main(void)
// {
// 	// char	test[20] = "abcdefghijk";
// 	// char	*p;
// 	// char	*x;

// 	// p = strchr((const char *)test, 'f');
// 	// printf("検索文字が見つかった場所から表示→%s\n", p);
// 	// x = ft_strchr((const char *)test, 'f');
// 	// printf("検索文字が見つかった場所から表示→%s\n", x);

// 	char *s = "libft-test-tokyo";

	// /* 17 */ printf("17strchrで検索文字が見つかった場所から表示→%s\n", strchr(s, '\0'));
// /* 17 */ printf("17ft_strchrで検索文字が見つかった場所から表示→%s\n\n", ft_strchr(s, '\0'));
	// /* 18 */ printf("18strchrで検索文字が見つかった場所から表示→%s\n", strchr(s, 'l' + 256));
	// printf("18ft_strchrで検索文字が見つかった場所から表示→%s\n\n", ft_strchr(s, 'l' + 256));
	// /* 19 */ printf("18strchrで検索文字が見つかった場所から表示→%s\n", strchr(s, 'i' + 256));
	// printf("18ft_strchrで検索文字が見つかった場所から表示→%s\n\n", ft_strchr(s, 'i' + 256));
	// /* 20 */ printf("18strchrで検索文字が見つかった場所から表示→%s\n", strchr(s, 'l' - 256));
	// printf("18ft_strchrで検索文字が見つかった場所から表示→%s\n\n", ft_strchr(s, 'l' - 256));
	// /* 21 */ printf("18strchrで検索文字が見つかった場所から表示→%s\n", strchr(s, 'i' - 256));
	// printf("18ft_strchrで検索文字が見つかった場所から表示→%s\n\n", ft_strchr(s, 'i' - 256));
// 	/* 22 */ printf("18strchrで検索文字が見つかった場所から表示→%s\n", strchr(s, 'z'));
// 	printf("18ft_strchrで検索文字が見つかった場所から表示→%s\n\n", ft_strchr(s, 'z'));
// 	/* 23 */ printf("18strchrで検索文字が見つかった場所から表示→%s\n", strchr(s, '~'));
// 	printf("18ft_strchrで検索文字が見つかった場所から表示→%s\n\n", ft_strchr(s, '~'));
// 	return (0);
// }

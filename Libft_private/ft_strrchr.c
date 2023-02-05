/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:22:56 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/26 18:34:22 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// /*
// ** 与えられた文字列の桁数を返す
// */
// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

/*
** 文字列の「最後」から「文字」を検索して見つかった場所をポインタで返します。
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	if (c == 0)
		return ((char *)&s[i]);
	while (i)
	{
		if (s[i - 1] == (char)c)
			return ((char *)&s[i - 1]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	test[20] = "123456311";
// 	char	*p;
// 	char	*x;

// 	p = strrchr((const char *)test, '\0');
// 	printf("検索文字が見つかった場所から表示→%s\n", p);
// 	x = ft_strrchr((const char *)test, '\0');
// 	printf("検索文字が見つかった場所から表示→%s\n", x);
// 	return (0);
// }

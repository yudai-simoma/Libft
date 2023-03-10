/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:54:22 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/26 19:45:33 by yshimoma         ###   ########.fr       */
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
 * s1 s2 のどちらかがNULLもしくはどちらもNULLの場合の処理
 */
static char	*ft_return(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		return ((char *)s2);
	else
		return ((char *)s1);
}

/*
 * s1とs2の文字列を結合し、戻り値として返す
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*return_src;
	size_t	malloc_size;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (ft_return(s1, s2));
	malloc_size = ft_strlen(s1) + ft_strlen(s2);
	return_src = (char *)malloc(sizeof(char) * (malloc_size + 1));
	if (return_src == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		return_src[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		return_src[i] = *s2;
		i++;
		s2++;
	}
	return_src[i] = '\0';
	return (return_src);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *a = "abdcdefg";
// 	char *b = "123456";
// 	char *c;

// 	c = ft_strjoin(NULL,NULL);
// 	printf("%s", c);
// 	return (0);
// }

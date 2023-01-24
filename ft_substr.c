/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:43:57 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/24 12:30:24 by yshimoma         ###   ########.fr       */
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
 * エラーチェック
 */
static int	ft_err_check(char const *s, unsigned int start, size_t len)
{
	if (s == NULL)
		return (1);
	if ((ft_strlen(s) <= (size_t)start) || (len == 0))
		return (2);
	return (0);
}

/*
 * s文字列の中で、startからlen分文字を抽出し、戻り値として返す。
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*return_str;
	size_t	i;

	if (ft_err_check(s, start, len) == 1)
		return (NULL);
	else if (ft_err_check(s, start, len) == 2)
		return ((char *)malloc(sizeof(char) * 1));
	return_str = (char *)malloc(sizeof(char) * (len + 1));
	if (return_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		return_str[i] = s[start + i];
		i++;
	}
	return_str[i] = '\0';
	return (return_str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "libft-test-tokyo";
// 	char *str;

// 	str = ft_substr(s,20,100);
// 	printf("%s\n", str);
// 	free(str);

// 	// /* 5 */ ASSERT_EQ_STR(ft_substr(s, 20, 100), "");
// 	// /* 10 */ ASSERT_EQ_STR(ft_substr(s, 20, 5), "");

// 	// /* 1 */ ASSERT_EQ_STR(ft_substr(s, 0, 100), s);
// 	// /* 3 */ ASSERT_EQ_STR(ft_substr(s, 5, 100), s + 5);
// 	// /* 3 */ ASSERT_EQ_STR(ft_substr(s, 10, 100), s + 10);
// 	// /* 4 */ ASSERT_EQ_STR(ft_substr(s, 15, 100), s + 15);
// 	// /* 6 */ ASSERT_EQ_STR(ft_substr(s, 0, 5), "libft");
// 	// /* 7 */ ASSERT_EQ_STR(ft_substr(s, 5, 5), "-test");
// 	// /* 8 */ ASSERT_EQ_STR(ft_substr(s, 10, 5), "-toky");
// 	// /* 9 */ ASSERT_EQ_STR(ft_substr(s, 15, 5), "o");
// 	// /* 11 */ ASSERT_EQ_STR(ft_substr(s, 0, 0), "");
// 	// /* 12 */ ASSERT_EQ_STR(ft_substr(s, 5, 0), "");
// 	// /* 13 */ ASSERT_EQ_STR(ft_substr(s, 10, 0), "");
// 	// /* 14 */ ASSERT_EQ_STR(ft_substr(s, 15, 0), "");
// 	// /* 15 */ ASSERT_EQ_STR(ft_substr(s, 20, 0), "");
// 	return (0);
// }

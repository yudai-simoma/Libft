/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:52:03 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/24 15:50:20 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// /*
// ** 文字列の先頭から「文字」を検索して見つかった場所をポインタで返します。
// */
// char	*ft_strchr(const char *s, int c)
// {
// 	if (c == 0)
// 		return ("\0");
// 	if (c > 255)
// 		c -= 256;
// 	if (c < 0)
// 		c += 256;
// 	while (*s != '\0')
// 	{
// 		if (*s == c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	return (0);
// }

// /*
// ** 文字列の「最後」から「文字」を検索して見つかった場所をポインタで返します。
// */
// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	if (c == 0)
// 		return ("\0");
// 	if (c > 255)
// 		c -= 256;
// 	if (c < 0)
// 		c += 256;
// 	i = ft_strlen((char *)s);
// 	while (i)
// 	{
// 		if (s[i - 1] == c)
// 			return ((char *)&s[i - 1]);
// 		i--;
// 	}
// 	return (0);
// }

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

// /*
//  * エラーチェック
//  */
// static int	ft_err_check(char const *s, unsigned int start, size_t len)
// {
// 	if (s == NULL)
// 		return (1);
// 	if ((ft_strlen(s) <= (size_t)start) || (len == 0))
// 		return (2);
// 	return (0);
// }

// /*
//  * s文字列の中で、startからlen分文字を抽出し、戻り値として返す。
//  */
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*return_str;
// 	size_t	i;

// 	if (ft_err_check(s, start, len) == 1)
// 		return (NULL);
// 	else if (ft_err_check(s, start, len) == 2)
// 		return ("\0");
// 	return_str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (return_str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		return_str[i] = s[start + i];
// 		i++;
// 	}
// 	return_str[i] = '\0';
// 	return (return_str);
// }

/*
 * 前方の削除したい文字数を返す
 */
static size_t	ft_start_num(char const *s1, char const *set)
{
	size_t	i;
	size_t	return_num;

	i = 0;
	return_num = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr((const char *)set, (int)s1[i]) != 0)
			return_num++;
		else
			return (return_num);
		i++;
	}
	return (0);
}

/*
 * 文字数 - 前方の削除したい文字数 - 後方の削除したい文字数を返す
 */
static size_t	ft_trim_len(char const *s1, char const *set, size_t	start_num)
{
	size_t	i;
	size_t	return_num;

	i = ft_strlen(s1);
	return_num = 0;
	while (i)
	{
		i--;
		if (ft_strrchr((const char *)set, (int)s1[i]) != 0)
			return_num++;
		else
			return (ft_strlen(s1) - return_num - start_num);
	}
	return (0);
}

/*
** 文字列*s1 から文字列*s2 を取り除いた文字列を返す
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_num;
	size_t	trim_len;
	char	*return_src;

	start_num = ft_start_num(s1, set);
	trim_len = ft_trim_len(s1, set, start_num);
	return_src = ft_substr((const char *)s1, (unsigned int)start_num, trim_len);
	return (return_src);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char const *s1 = "hello world";
// 	char const *set = "world";
// 	//全部

// 	printf("%s", ft_strtrim(s1, set));

// 	// /* 1 */ ASSERT_EQ_STR(ft_strtrim("hello world", "world"), "hello ");
// 	// /* 2 */ ASSERT_EQ_STR(ft_strtrim("hello world", "hello"), " world");
// 	// /* 5 */ ASSERT_EQ_STR(ft_strtrim("    hello world     ", " ")
	////, "hello world");
// 	// /* 6 */ ASSERT_EQ_STR(ft_strtrim(" \n\t\r    hello \n\t\r world     
////\r\t\n\t \r\n", " \n\t\r"), "hello \n\t\r world");

// 	// /* 3 */ ASSERT_EQ_STR(ft_strtrim("hello world", ""), "hello world");
// 	// /* 4 */ ASSERT_EQ_STR(ft_strtrim("", ""), "");
// 	// /* 7 */ ASSERT_EQ_STR(ft_strtrim("hello world"
////, "abcdefghijklmnopqrstuvwxyz"), " ");
// 	return (0);
// }

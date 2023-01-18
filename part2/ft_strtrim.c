/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:52:03 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/18 21:15:01 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
** 与えられた文字列の桁数を返す
*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
** 文字型配列 *dst に文字列 *src を先頭から n - 1 文字コピーします。
** src の長さが n 以上のときには n - 1 文字をコピーし、このときに '\0' の自動付加を行う。
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[i] != '\0')
	{
		src_len++;
		i++;
	}
	i = 0;
	while (i + 1 < dstsize && src[i] != '\0' )
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (src_len);
}

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
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

/*
 *
 "abacaadefaaghaiaaaafkaaa"
 "ab"
 */
size_t	ft_start_num(char const *s1, char const *set)
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
 *
 */
size_t	ft_trim_len(char const *s1, char const *set)
{
	s1 = 0;
	set = 0;
	return(0);
}

/*
** 文字列*s1 から文字列*s2 を取り除いた文字列を返す
*/
char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start_num;
	size_t	trim_len;
	char	*return_src;

	start_num = ft_start_num(s1, set);
	trim_len = ft_trim_len(s1, set);
	return_src = ft_substr(s1, (unsigned int)start_num, trim_len);
	return (return_src);
}

char	*ft_substr(char const *s, unsigned int start, size_t len);

#include <stdio.h>
int	main(void)
{
	char const *s1 = "abacaadefaaghaiaaaafkaaa";//abacdefghaifka, bacaadefaaghaiaaaafk
	char const *set = "ab";
	//全部

	printf("%s", ft_strtrim(s1, set));
	return (0);
}
/*
ft_substr ft_strchr ft_strrchrを使用する
or
先頭文字数、終了文字数を求め、最後にft_substrを実行する
*/

/*
 * エラーチェック
 */
static int	ft_err_check(char const *s, unsigned int start, size_t len)
{
	size_t	cp_start;

	cp_start = (size_t)start;
	if (s == NULL && len == 0)
		return (1);
	if (ft_strlen(s) < len)
		return (1);
	if (ft_strlen(s) < cp_start)
		return (1);
	return (0);
}

/*
 * s文字列の中で、startからlen分文字を抽出し、戻り値として返す。
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*return_str;
	size_t	i;

	if (ft_err_check(s, start, len))
		return (NULL);
	return_str = (char *)malloc(sizeof(char) * (len + 1));
	if (return_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		return_str[i] = s[start - 1 + i];
		i++;
	}
	return_str[i] = '\0';
	return (return_str);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:30:48 by shimomayuda       #+#    #+#             */
/*   Updated: 2023/01/23 13:46:38 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
** メモリに指定バイト数分の値をセットすることができます。
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	unsigned char	cc;
	size_t			i;

	bb = (unsigned char *)b;
	cc = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		*bb = cc;
		bb++;
		i++;
	}
	return (b);
}

/*
** 指定バイト分メモリ領域をn個分確保する
*/
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*src;

	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	src = (unsigned char *)malloc(size * count);
	if (src == NULL)
		return (NULL);
	ft_memset(src, '\0', (size * count));
	return ((void *)src);
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
		if (s[i - 1] == c)
			return ((char *)&s[i - 1]);
		i--;
	}
	return (0);
}

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
 * エラーチェック
 */
static int	ft_err_check(char const *s, unsigned int start, size_t len)
{
	size_t	cp_start;

	cp_start = (size_t)start;
	if (s == NULL)
		return (1);
	if (ft_strlen(s) <= cp_start && len <= 0)
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
		return ("\0");
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

/*
 * 前方の削除したい文字数を返す
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
 * 文字数 - 前方の削除したい文字数 - 後方の削除したい文字数を返す
 */
size_t	ft_trim_len(char const *s1, char const *set, size_t	start_num)
{
	size_t	i;
	size_t	return_num;

	i = 0;
	return_num = 0;
	while (s1[i] != '\0')
	{
		if (ft_strrchr((const char *)set, (int)s1[i]) != 0)
			return_num++;
		else
			return (ft_strlen(s1) - return_num - start_num);
		i++;
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

/*
 * ft_strtrimの削除文字が文字列ではなく文字の場合の関数
 */
static char	*ft_strtrim_c(char const *s1, char c)
{
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	return (ft_strtrim(s1, set));
}

/*
 * 区切る個数を返す
 */
static size_t	ft_split_num(char *trim_s, char c)
{
	size_t	i;
	size_t	retrun_num;

	i = 0;
	retrun_num = 0;
	while (trim_s[i] != '\0')
	{
		if (trim_s[i] == c)
			retrun_num++;
		i++;
	}
	return (retrun_num + 1);	
}

/*
 * s文字列の中で、startからlen分文字を抽出し、戻り値として返す。
 */
static char	**ft_2_calloc(char *trim_s, char **return_src, char c)
{
	size_t	malloc_size;
	size_t	i;
	size_t	j;

	malloc_size = 0;
	i = 0;
	j = 0;
	while (trim_s[i] != '\0')
	{
		if (trim_s[i] == c)
		{
			return_src[j] = (char *)calloc(malloc_size + 1, 1);
			malloc_size = 0;
			j++;
		}
		else
			malloc_size++;
		i++;
	}
	return_src[j] = (char *)calloc(malloc_size + 1, 1);
	return (return_src);
}

/*
 * s文字列の中で、startからlen分文字を抽出し、戻り値として返す。
 */
static char	**ft_split_set(char *trim_s, char **return_src, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (trim_s[i] != '\0')
	{
		if (trim_s[i] != c)
		{
			return_src[j][k] = trim_s[i];
			i++;
			k++;
		}
		else
		{
			i++;
			j++;
			k = 0;
		}
	}
	return (return_src);
}

/*
 * s文字列の中で、startからlen分文字を抽出し、戻り値として返す。
 */
char	**ft_split(char const *s, char c)
{
	char	**return_src;
	char	*trim_s;

	if (s[0] == '\0')
		return (NULL);
	if (s[0] == '\0' && c == '\0')
		return (NULL);
	trim_s = ft_strtrim_c(s, c);
	return_src = (char **)malloc(sizeof(char *) * ft_split_num(trim_s, c));
	return_src = ft_2_calloc(trim_s, return_src, c);
	return_src = ft_split_set(trim_s, return_src, c);
	return (return_src);
}

#include <stdio.h>
int	main(void)
{
	char **src;

	src = ft_split("\0", '@');
	for (int i = 0; i < 3; i++)
	{
		if (src == '\0')
			printf("%s\n", src[i]);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:32:13 by shimomayuda       #+#    #+#             */
/*   Updated: 2023/01/28 19:32:58 by yshimoma         ###   ########.fr       */
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

// /*
//  *s1とs2の文字列を結合し、戻り値として返す
//  */
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*return_src;
// 	size_t	malloc_size;
// 	size_t	i;

// 	malloc_size = ft_strlen(s1) + ft_strlen(s2);
// 	return_src = (char *)malloc(sizeof(char) * (malloc_size + 1));
// 	if (return_src == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (*s1 != '\0')
// 	{
// 		return_src[i] = *s1;
// 		i++;
// 		s1++;
// 	}
// 	while (*s2 != '\0')
// 	{
// 		return_src[i] = *s2;
// 		i++;
// 		s2++;
// 	}
// 	return_src[i] = '\0';
// 	return (return_src);
// }

// /*
// ** メモリに指定バイト数分の値をセットすることができます。
// */
// void	*ft_memset(void *b, int c, size_t len)
// {
// 	unsigned char	*bb;
// 	unsigned char	cc;
// 	size_t			i;

// 	bb = (unsigned char *)b;
// 	cc = (unsigned char)c;
// 	i = 0;
// 	while (i < len)
// 	{
// 		*bb = cc;
// 		bb++;
// 		i++;
// 	}
// 	return (b);
// }

// /*
// ** 指定バイト分メモリ領域をn個分確保する
// */
// void	*ft_calloc(size_t count, size_t size)
// {
// 	unsigned char	*src;

// 	if (size > 0 && count > SIZE_MAX / size)
// 		return (NULL);
// 	src = (unsigned char *)malloc(size * count);
// 	if (src == NULL)
// 		return (NULL);
// 	ft_memset(src, '\0', (size * count));
// 	return ((void *)src);
// }

/*
 * 数値が何桁か判断する関数
 */
static size_t	ft_malloc_size(long n)
{
	size_t	malloc_size;

	malloc_size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		malloc_size = 1;
	}
	while (n)
	{
		n /= 10;
		malloc_size++;
	}
	return (malloc_size);
}

/*
** 受け取った値を交換する
*/
static void	swap_arr_str(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
** 配列の要素数の半分だけ繰り返しを行い、端から順に2つの値を取得する
** char配列
*/
static void	ft_rev_str_tab(char *str, size_t size)
{
	size_t	count_loop;
	size_t	arr_num;

	count_loop = size / 2;
	arr_num = 0;
	while (count_loop != 0)
	{
		swap_arr_str(&str[size - 1 - arr_num], &str[arr_num]);
		count_loop--;
		arr_num++;
	}
}

/*
 * 数値を文字列に格納する
 */
static char	*ft_set_itoa(char *return_str, long nn, size_t size, char sign)
{
	size_t	i;

	if (sign == '-')
	{
		size -= 1;
		return_str[size] = '-';
	}
	i = 0;
	while (i < size)
	{
		return_str[i] = (nn % 10) + '0';
		nn /= 10;
		i++;
	}
	return (return_str);
}

/*
 * 数値を文字列にして返す関数
 */
char	*ft_itoa(int n)
{
	char	*return_str;
	long	nn;
	char	sign;
	size_t	malloc_size;

	nn = (long)n;
	malloc_size = ft_malloc_size(nn);
	return_str = (char *)ft_calloc(malloc_size + 1, 1);
	if (return_str == NULL)
		return (NULL);
	sign = '+';
	if (nn < 0)
	{
		nn *= -1;
		sign = '-';
	}
	return_str = ft_set_itoa(return_str, nn, malloc_size, sign);
	ft_rev_str_tab(return_str, malloc_size);
	return (return_str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(9));
// 	printf("%s\n", ft_itoa(10));
// 	printf("%s\n", ft_itoa(11));
// 	printf("%s\n", ft_itoa(20));
// 	// printf("%s\n", ft_itoa(0));
// 	// printf("%s\n", ft_itoa(2147483647));
// 	// printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }

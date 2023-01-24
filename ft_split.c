/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:30:48 by shimomayuda       #+#    #+#             */
/*   Updated: 2023/01/24 18:44:51 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** split文字か判断、split文字なら0を返し、split文字でない場合は1を返す
*/
int	charset_jud(char const s, char c)
{
	if (s == c)
		return (0);
	return (1);
}

/*
** 2次元目の配列のにサイズを確保し代入する
*/
char	*ft_add_s(char const *s, char c)
{
	int		i;
	char	*return_str;

	i = 0;
	while (s[i] != '\0' && charset_jud(s[i], c) == 1)
		i++;
	return_str = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] != '\0' && charset_jud(s[i], c) == 1)
	{
		return_str[i] = s[i];
		i++;
	}
	return_str[i] = '\0';
	return (return_str);
}

/*
** 1次元目の配列の要素数を返す
*/
size_t	ft_array_size(char const *s, char c)
{
	int	i;
	int	flg;
	int	return_size;

	i = 0;
	flg = 0;
	return_size = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && charset_jud(s[i], c) == 0)
			i++;
		if (s[i] != '\0')
			return_size++;
		while (s[i] != '\0' && charset_jud(s[i], c) == 1)
			i++;
	}
	return (return_size);
}

/*
** sの中からcの文字列を区切り文字とし、2次元配列へ格納する
*/
char	**ft_split(char const *s, char c)
{
	char	**split_s;
	size_t	array_size;
	size_t	i;
	size_t	j;

	array_size = ft_array_size(s, c);
	split_s = (char **)malloc(sizeof(char *) * (array_size + 1));
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && charset_jud(s[i], c) == 0)
			i++;
		if (s[i] != '\0')
		{
			split_s[j] = ft_add_s(&s[i], c);
			++j;
		}
		while (s[i] != '\0' && charset_jud(s[i], c) == 1)
			i++;
	}
	split_s[j] = NULL;
	return (split_s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char **src;

// 	src = ft_split("hello,,,world,,,42,,,tokyo", ',');
// 	// src = ft_split("hello,world,42,tokyo", ',');
// 	for (int i = 0; i < 5; i++)
// 	{
// 		// if (src == '\0')
// 			printf("%s\n", src[i]);
// 	}
// 	return (0);
// }

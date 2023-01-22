/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:43:57 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/22 16:37:10 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

#include <stdio.h>
int	main(void)
{
	char const *s = "abcdefghijklmn";
	char *str;

	str = ft_substr(s,3,4);
	printf("%s\n", str);
	free(str);	
	return (0);
}

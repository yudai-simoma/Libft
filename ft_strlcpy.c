/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:54:48 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/13 18:39:39 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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

// #include <stdio.h>
// int main(void)
// {
// 	char dst[] = "123";
// 	const char *src = "abc";

// 	printf("%zu\n", ft_strlcpy(dst, src, 2));
// 	printf("%s", dst);
// 	return (0);
// }

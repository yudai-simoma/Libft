/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:39:43 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 13:55:34 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 文字型配列destのうしろに文字列srcを連結します。
** 最大でsize - strlen(dst) - 1バイトを追記（-1バイトに'\0'を追加）
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	result_num;

	if ((dst[0] == '\0') || (src[0] == '\0'))
		return (0);
	if (dstsize != 0)
		result_num = ft_strlen(dst) + ft_strlen(src);
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	i = ft_strlen(dst);
	j = 0;
	while (i + 1 < dstsize && j < ft_strlen(src))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (result_num);
}

// #include <stdio.h>

// int	main(void)
// {
//     char str1[50] = "ABCDEF123456789";
//     const char str2[] = "123";
//     char str3[50] = "ABCDEF123456789";
//     const char str4[] = "123";

//     printf("%lu\n", strlcat(str1, str2, 40));
// 	printf("%s\n", str1);
//     printf("%lu\n", strlcat(str1, str2, 21));
// 	printf("%s\n", str1);
// 	printf("\n");
//     printf("%zu\n", ft_strlcat(str3, str4, 40)); 
//     printf("%s\n", str3);
// 	printf("%zu\n", ft_strlcat(str3, str4, 21));
// 	printf("%s\n", str3);
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:27:37 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 13:55:51 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 指定バイト数分のメモリをコピーする関数です。
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*cp_dst;
	const unsigned char	*cp_src;
	size_t				i;

	cp_dst = (unsigned char *)dst;
	cp_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		cp_dst[i] = cp_src[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char buf[] = "ABCDDEF";
// 	char buf1[] = "ABCDDEF";
// 	char buf2[] = "123456789";

// 	memcpy(buf, buf2, 3);
// 	printf("コピー後のbuf文字列→%s\n",buf);
// 	ft_memcpy(buf1, buf2, 3);
// 	printf("コピー後のbuf文字列→%s\n",buf1);
// 	return (0);
// }

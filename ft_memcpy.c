/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:27:37 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/17 09:17:28 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

/*
** 指定バイト数分のメモリをコピーする関数です。
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*cp_dst;
	const unsigned char	*cp_src;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
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


// int	main(void)
// {
// 	// char buf[] = "ABCDDEF";
// 	// char buf1[] = "ABCDDEF";
// 	// char buf2[] = "123456789";

// 	// memcpy(buf, buf2, 3);
// 	// printf("コピー後のbuf文字列→%s\n",buf);
// 	// ft_memcpy(buf1, buf2, 3);
// 	// printf("コピー後のbuf文字列→%s\n",buf1);
// //   printf("%p\n", memcpy(NULL, NULL, 3));
//   printf("%p\n", ft_memcpy(NULL, NULL, 0));
// 	return (0);
// }
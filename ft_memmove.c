/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:09:34 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/14 14:49:34 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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

/*
** 指定したバイト数のメモリをコピー(移動)する関数です。
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cp_dst;
	const unsigned char	*cp_src;

	cp_dst = (unsigned char *)dst;
	cp_src = (const unsigned char *)src;
	if (dst > src)
	{
		while (len)
		{
			cp_dst[len - 1] = cp_src[len - 1];
			len--;
		}
	}
	else
		return (ft_memcpy(cp_dst, cp_src, len));
	return (dst);
}

#include <stdio.h>
int	main(void)
{
	char buffer[10] = "abcdefg";
	char buffer1[10] = "abcdefg";
	char buffer2[10] = "1234567";
	char buffer5[10] = "1234567";

	char buffer3[10] = "1234567";
	char buffer4[10] = "1234567";

	char * s = buffer;
	char * s1 = buffer1;
	char * s2 = buffer2;
	char * s7 = buffer5;
	char * s3 = &buffer3[0];
	char * s4 = &buffer3[2];
	char * s5 = &buffer4[0];
	char * s6 = &buffer4[2];

	printf(">after memmove s1[%.10s]\n", (char*)memmove(s1, s2, 5)); 
	printf(">after ft_memmove s[%.10s]\n", (char*)ft_memmove(s, s7, 5));
	printf(">after memmove s3[%.10s]\n", (char*)memmove(s3, s4, 4));
	printf(">after ft_memmove s5[%.10s]\n", (char*)ft_memmove(s5, s6, 4));
	return(0);
}

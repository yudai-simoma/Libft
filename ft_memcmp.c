/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:24:32 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/14 16:11:44 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** 指定バイト数のメモリブロックを比較する関数です。
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ss1;
	unsigned char *ss2;
	size_t i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char buf[] = "ABCD5EFGHABC1";
    char buf2[] = "ABCe23456";

	printf("検索文字から表示→%d\n",memcmp(buf,buf2,4));
	printf("検索文字から表示→%d\n",memcmp(buf,buf2,3));
	printf("検索文字から表示→%d\n",ft_memcmp(buf,buf2,4));
	printf("検索文字から表示→%d\n",ft_memcmp(buf,buf2,3));
}

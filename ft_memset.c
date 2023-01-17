/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 20:18:38 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/16 20:17:51 by yshimoma         ###   ########.fr       */
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

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
//     char buf[100] = "ABCDEFGHIJK";
//     char buf1[100] = "ABCDEFGHIJK";
//     //先頭から2バイト進めた位置に「１」を3バイト書き込む
//     memset(buf+2,'1',NULL);
//     printf("buf文字列→%s\n",buf);
//     ft_memset(buf1+2,'1',NULL);
//     printf("buf文字列→%s\n",buf1);
//     return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:50:40 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 13:55:57 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** メモリの中からバイト数を指定して、文字を検索する関数です。
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;
	size_t			i;

	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char buf[] = "ABCD5EFGH";
//     char *ch;
//     char *ch2;

//     ch = (char*)memchr(buf,'5',sizeof(buf));
//     if(ch!=NULL){
//         printf("検索文字から表示→%s\n",ch);
//     }else{
//         puts("検索文字が見つかりませんでした。");
//     }
//     ch2 = (char*)ft_memchr(buf,'5',sizeof(buf));
//     if(ch!=NULL){
//         printf("検索文字から表示→%s\n",ch);
//     }else{
//         puts("検索文字が見つかりませんでした。");
//     }

// }

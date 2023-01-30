/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:01:28 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/30 15:50:09 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** bzero() 関数は バイト列 s から始まる領域の先頭 n バイトを 数値ゼロ (値が '\0' のバイト) で埋める。
*/
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char) '\0';
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	str[10] = {255,2,3,4,5,6};
// 	int	str1[10] = {255,2,3,4,5,6};

// 	for(int i = 0; i < 10; i++)
// 		printf("%d ", str[i]);
// 	printf("\n");
// 	bzero((void*)str, (size_t)1);
// 	for(int i = 0; i < 10; i++)
// 		printf("%d ", str[i]);
// 	printf("\n----------------------\n");
// 	for(int i = 0; i < 10; i++)
// 		printf("%d ", str1[i]);
// 	printf("\n");
// 	ft_bzero((void*)str1, (size_t)1);
// 	for(int i = 0; i < 10; i++)
// 		printf("%d ", str1[i]);

// 	// char	str[10] = "abcde";
// 	// char	str1[10] = "abcde";

// 	// printf("%s\n", str);
// 	// bzero((void*)str, (size_t)2);
// 	// printf("%s\n", str);
// 	// printf("%c\n", str[2]);
// 	// printf("----------------------\n");
// 	// printf("%s\n", str1);
// 	// ft_bzero((void*)str1, (size_t)2);
// 	// printf("%s\n", str1);
// 	// printf("%c\n", str1[2]);
// 	// return (0);
// }

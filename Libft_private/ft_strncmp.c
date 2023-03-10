/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:15:07 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/26 18:51:04 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 文字列*s1 と文字列*s2 を先頭からn文字比較します。'\0'以降の比較は行いません。
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
//     // char str[] = "ABC";
//     // printf("ABC: ABE   = %d\n", strncmp(str, "ABE", -4));
//     // printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 4));
//     // printf("AZC: A   = %d\n", strncmp(str, "A", 2));
//     // printf("ABC: ACCD  = %d\n", strncmp(str, "ACCD", 3));
//     // printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
//     // printf("ABC: B     = %d\n", strncmp(str, "B", 2));
//     // printf("ABC: A     = %d\n", strncmp(str, "A", 2));
// 	// printf("\n");
// 	// printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABE", -4));
//     // printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 4));
//     // printf("AZC: A   = %d\n", ft_strncmp(str, "A", 2));
//     // printf("ABC: ACCD  = %d\n", ft_strncmp(str, "ACCD", 3));
//     // printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
//     // printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
//     // printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));

// 	// /* 58 */ printf("%d\n", strncmp(NULL, "hello", 0));
// 	// /* 58 */ printf("%d\n\n", ft_strncmp(NULL, "hello", 0));
// 	// /* 59 */ printf("%d\n", strncmp(NULL, NULL, 0));
// 	// /* 59 */ printf("%d\n\n", ft_strncmp(NULL, NULL, 0));

// 	printf("%d\n", strncmp(((void *)0), NULL, 3));
// 	printf("%d\n\n", ft_strncmp(((void *)0), "nope", 3));
//     return (0);
// }

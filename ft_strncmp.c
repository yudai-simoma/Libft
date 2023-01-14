/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:15:07 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/13 19:59:29 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** 文字列*s1 と文字列*s2 を先頭からn文字比較します。'\0'以降の比較は行いません。
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
    char str[] = "ABC";
    printf("ABC: ABE   = %d\n", strncmp(str, "ABE", -4));
    printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 4));
    printf("AZC: A   = %d\n", strncmp(str, "A", 2));
    printf("ABC: ACCD  = %d\n", strncmp(str, "ACCD", 3));
    printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
    printf("ABC: B     = %d\n", strncmp(str, "B", 2));
    printf("ABC: A     = %d\n", strncmp(str, "A", 2));
	printf("\n");
	printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABE", -4));
    printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 4));
    printf("AZC: A   = %d\n", ft_strncmp(str, "A", 2));
    printf("ABC: ACCD  = %d\n", ft_strncmp(str, "ACCD", 3));
    printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
    printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
    printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
    return (0);
}

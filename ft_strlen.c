/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:58:00 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/14 14:04:50 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** 与えられた文字列の桁数を返す
*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s != 0 && s[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *s = "abcde";

// 	printf("%zu", ft_strlen(NULL));
// }

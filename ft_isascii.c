/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:52:44 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 13:56:16 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 引数cの文字が0x00～0x7Fの場合は0以外の値、それ以外の場合は0を返します。
*/
int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", isascii('a'));
// 	printf("%d\n", isascii('='));
// 	printf("%d\n", isascii(3));
// 	printf("%d\n\n", isascii(0x80));

// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('='));
// 	printf("%d\n", ft_isascii(3));
// 	printf("%d\n", ft_isascii(0x80));
// 	return (0);
// }

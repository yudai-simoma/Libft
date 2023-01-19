/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:06:59 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/17 09:48:25 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 印字文字（表示可能文字）かどうか判定する。
*/
int	ft_isprint(int c)
{
	if (040 <= c && c <= 176)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", isprint('a'));
// 	printf("%d\n", isprint('='));
// 	printf("%d\n", isprint(3));
// 	printf("%d\n\n", isprint('\n'));

// 	printf("%d\n", ft_isprint('a'));
// 	printf("%d\n", ft_isprint('='));
// 	printf("%d\n", ft_isprint(3));
// 	printf("%d\n", ft_isprint('\n'));
// 	return (0);
// }

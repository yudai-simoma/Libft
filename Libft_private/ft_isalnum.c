/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:30:09 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/17 13:32:52 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 引数c が英数字であれば 0以外を返し、そうでなければ 0 を返す。(8進数表現)
*/
int	ft_isalnum(int c)
{
	if ((c >= 0060 && c <= 0071) || (c >= 0101 && c <= 0132)
		|| (c >= 0141 && c <= 0172))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", isalnum('a'));
// 	printf("%d\n", isalnum('='));
// 	printf("%d\n", isalnum(3));
// 	printf("%d\n\n", isalnum('9'));

// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('='));
// 	printf("%d\n", ft_isalnum(3));
// 	printf("%d\n", ft_isalnum('9'));
// 	return (0);
// }

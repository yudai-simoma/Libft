/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:50:01 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 13:56:20 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 引数c が英字であれば 0以外を返し、そうでなければ 0 を返す。
*/
int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", isalpha('='));
// 	printf("%d\n", isalpha(3));
// 	printf("%d\n\n", isalpha('9'));

// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('='));
// 	printf("%d\n", ft_isalpha(3));
// 	printf("%d\n", ft_isalpha('9'));
// 	return (0);
// }

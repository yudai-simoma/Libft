/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:03:19 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/10 20:06:46 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

/*
** 引数c が数字であれば 0以外を返し、そうでなければ 0 を返す。
*/
int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", isdigit('a'));
// 	printf("%d\n", isdigit('='));
// 	printf("%d\n", isdigit(3));
// 	printf("%d\n\n", isdigit('9'));

// 	printf("%d\n", ft_isdigit('a'));
// 	printf("%d\n", ft_isdigit('='));
// 	printf("%d\n", ft_isdigit(3));
// 	printf("%d\n", ft_isdigit('9'));
// 	return (0);
// }

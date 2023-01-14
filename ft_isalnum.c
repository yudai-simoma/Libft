/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:30:09 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/10 19:49:53 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

/*
** 引数c が英数字であれば 0以外を返し、そうでなければ 0 を返す。
*/
int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}

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

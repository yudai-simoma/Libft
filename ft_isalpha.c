/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:50:01 by yshimoma          #+#    #+#             */
<<<<<<< HEAD:ft_isalpha.c
/*   Updated: 2023/01/17 11:38:00 by yshimoma         ###   ########.fr       */
=======
/*   Updated: 2023/01/17 13:32:25 by yshimoma         ###   ########.fr       */
>>>>>>> fba3c804819b2300c6ebc5946e14ad6f2d2114c9:part1/ft_isalpha.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 引数c が英字であれば 0以外を返し、そうでなければ 0 を返す。(8進数表現)
*/
int	ft_isalpha(int c)
{
	if ((c >= 0101 && c <= 0132) || (c >= 0141 && c <= 0172))
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
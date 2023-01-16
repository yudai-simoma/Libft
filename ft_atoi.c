/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:33:24 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 20:20:37 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
//  #include <stdlib.h>

/*
** strの文字列の最初の数字を、int型に変換する関数
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result_num;

	// if ()
	// 	return (-1);
	// else if ()
	// 	return (0);
	i = 0;
	sign = 0;
	result_num = 0;
	while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign++;
		if (i != 0)
			return (0);
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		result_num *= 10;
		result_num += (str[i] - 48);
		i++;
	}
	if (sign % 2 != 0)
		result_num *= -1;
	return (result_num);
}

// int	main(void)
// {
// 	// printf("%d\n",atoi("12345"));
// 	// printf("%d\n",atoi(""));
// 	// printf("%d\n",atoi("123aa"));
// 	// printf("%d\n",atoi("abcd"));
// 	// printf("%d\n",atoi("@!#$"));
// 	// printf("%d\n",atoi("123aa456"));
// 	// printf("%d\n",atoi("aa456"));
// 	// printf("%d\n",atoi("-123aa456"));
// 	// printf("%d\n",atoi("--123aa456"));
// 	// printf("%d\n",atoi("+-123aa456"));
// 	// printf("%d\n",atoi("+123aa456"));
// 	// printf("-----------------------------\n");

// 	// printf("%d\n",ft_atoi("12345"));
// 	// printf("%d\n",ft_atoi(""));
// 	// printf("%d\n",ft_atoi("123aa"));
// 	// printf("%d\n",ft_atoi("abcd"));
// 	// printf("%d\n",ft_atoi("@!#$"));
// 	// printf("%d\n",ft_atoi("123aa456"));
// 	// printf("%d\n",ft_atoi("aa456"));
// 	// printf("%d\n",ft_atoi("-123aa456"));
// 	// printf("%d\n",ft_atoi("--123aa456"));
// 	// printf("%d\n",ft_atoi("+-123aa456"));
// 	// printf("%d\n",ft_atoi("+123aa456"));
// 	printf("27. %d\n",atoi("9223372036854775808"));	//LONG_MAX + 1
// 	printf("27. %d\n\n",ft_atoi("9223372036854775808"));
// 	printf("28. %d\n",atoi("-9223372036854775809"));	//LONG_MIN - 1
// 	printf("28. %d\n\n",ft_atoi("-9223372036854775809"));
// 	// printf("29. %d\n",atoi("18446744073709551616"));
// 	// printf("29. %d\n\n",ft_atoi("18446744073709551616"));
// 	// printf("30. %d\n",atoi("18446744073709551616"));
// 	// printf("30. %d\n\n",ft_atoi("18446744073709551616"));
// 	// printf("36. %d\n",atoi("18446744073709551614"));
// 	// printf("36. %d\n\n",ft_atoi("18446744073709551614"));
// 	// printf("37. %d\n",atoi("18446744073709551614"));
// 	// printf("37. %d\n\n",ft_atoi("18446744073709551614"));
// }

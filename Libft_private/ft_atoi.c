/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:33:24 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/28 19:35:59 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// /*
// ** 与えられた文字列の桁数を返す
// */
// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s != 0 && s[i] != '\0')
// 		i++;
// 	return (i);
// }

/*
** strがlong型の最大値を超えるか判断する関数
*/
static long	ft_max_check(const char *str, int sign)
{
	long	return_num;
	long	i;

	return_num = 0;
	i = 0;
	while ((str[i] != '\0')
		&& ((str[i] == '+' || str[i] == '-') || (str[i] == '0')))
		i++;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		if (return_num < ((LONG_MIN + (str[i] - '0')) / 10))
		{
			if (sign == 0)
				return (1);
			return (2);
		}
		return_num *= 10;
		return_num -= str[i] - '0';
		i++;
	}
	if (sign == 0 && return_num == LONG_MIN)
		return (1);
	return (0);
}

/*
** strが数値より前に+,-以外の文字があるかチェック
*/
static int	ft_err_check(const char *str)
{
	int	i;

	while ((*str != '\0')
		&& ((*str >= 9 && *str <= 13) || (*str == 32)))
		str++;
	i = 0;
	while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
	{
		if ((str[i] != '-' && str[i] != '+') && (str[i] < '0' || str[i] > '9'))
			return (1);
		if ((i > 0) && (str[i] < '0' || str[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}

/*
** strの符号チェック
*/
static int	ft_sign_check(const char *str)
{
	int	sign;

	sign = 0;
	while ((*str != '\0')
		&& (((*str == '+' || *str == '-') || (*str == '0'))
			|| ((*str >= 9 && *str <= 13) || (*str == 32))))
	{
		if (*str == '-')
			sign++;
		str++;
	}
	return (sign);
}

/*
** strの文字列の最初の数字を、int型に変換する関数
*/
int	ft_atoi(const char *str)
{
	int	sign;
	int	result_num;

	result_num = 0;
	if (ft_err_check(str))
		return (0);
	sign = ft_sign_check(str);
	if (ft_max_check(str, sign) == 1)
		return ((int)LONG_MAX);
	else if (ft_max_check(str, sign) == 2)
		return ((int)LONG_MIN);
	while ((*str != '\0')
		&& (((*str == '+' || *str == '-') || (*str == '0'))
			|| ((*str >= 9 && *str <= 13) || (*str == 32))))
		str++;
	while ((*str != '\0') && (*str >= '0' && *str <= '9'))
	{
		result_num *= 10;
		result_num += (*str - 48);
		str++;
	}
	if (sign % 2 != 0)
		result_num *= -1;
	return (result_num);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
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

// 	// printf("22. %d\n",atoi("18446744073709551615"));	//ULONG_MAX + 1
// 	// printf("22. %d\n\n",ft_atoi("18446744073709551615"));
// 	// printf("23. %d\n",atoi("18446744073709551615"));	//SIZE_MAX + 1
// 	// printf("23. %d\n\n",ft_atoi("18446744073709551615"));

// 	// printf("27. %d\n",atoi("9223372036854775808"));	//LONG_MAX + 1
// 	// printf("27. %d\n\n",ft_atoi("9223372036854775808"));
// 	// printf("28. %d\n",atoi("-9223372036854775809"));	//LONG_MIN - 1
// 	// printf("28. %d\n\n",ft_atoi("-9223372036854775809"));
// 	// printf("29. %d\n",atoi("18446744073709551616")); //ULONG_MAX + 1
// 	// printf("29. %d\n\n",ft_atoi("18446744073709551616"));
// 	// printf("30. %d\n",atoi("18446744073709551616")); //SIZE_MAX + 1
// 	// printf("30. %d\n\n",ft_atoi("18446744073709551616"));

// 	// printf("36. %d\n",atoi("18446744073709551614")); //ULONG_MAX - 1
// 	// printf("36. %d\n\n",ft_atoi("18446744073709551614"));
// 	// printf("37. %d\n",atoi("18446744073709551614")); //SIZE_MAX - 1
// 	// printf("37. %d\n\n",ft_atoi("18446744073709551614"));

// 	// printf("test2. %d\n",atoi("\t\v\f\r\n \f-06050"));
// 	// printf("test2. %d\n\n",ft_atoi("\t\v\f\r\n \f-06050"));
// 	// printf("test2. %d\n",atoi((void *)0));
// 	printf("test2. %d\n\n",ft_atoi((void *)0));
// }

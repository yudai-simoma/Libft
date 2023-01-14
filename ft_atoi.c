/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:33:24 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/14 16:52:15 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** strの文字列の最初の数字を、int型に変換する関数
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result_num;

	i = 0;
	sign = 0;
	result_num = 0;
	// while ((str[i] != '\0')
	// 	&& ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
	// 	i++;
	while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign++;
		if (i != 0)
			return(0);
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

#include <stdio.h>
int	main(void)
{
	printf("%d\n",atoi("12345"));
	printf("%d\n",atoi(""));
	printf("%d\n",atoi("123aa"));
	printf("%d\n",atoi("abcd"));
	printf("%d\n",atoi("@!#$"));
	printf("%d\n",atoi("123aa456"));
	printf("%d\n",atoi("aa456"));
	printf("%d\n",atoi("-123aa456"));
	printf("%d\n",atoi("--123aa456"));
	printf("%d\n",atoi("+-123aa456"));
	printf("%d\n",atoi("+123aa456"));
	printf("-----------------------------\n");

	printf("%d\n",ft_atoi("12345"));
	printf("%d\n",ft_atoi(""));
	printf("%d\n",ft_atoi("123aa"));
	printf("%d\n",ft_atoi("abcd"));
	printf("%d\n",ft_atoi("@!#$"));
	printf("%d\n",ft_atoi("123aa456"));
	printf("%d\n",ft_atoi("aa456"));
	printf("%d\n",ft_atoi("-123aa456"));
	printf("%d\n",ft_atoi("--123aa456"));
	printf("%d\n",ft_atoi("+-123aa456"));
	printf("%d\n",ft_atoi("+123aa456"));
}

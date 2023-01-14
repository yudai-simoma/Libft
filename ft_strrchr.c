/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:22:56 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/11 20:38:18 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

/*
** 文字列の「最後」から「文字」を検索して見つかった場所をポインタで返します。
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i)
	{
		if (s[i - 1] == c)
			return ((char *)&s[i - 1]);
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	test[20] = "123456311";
// 	char	*p;
// 	char	*x;

// 	p = strrchr((const char *)test, '3');
// 	printf("検索文字が見つかった場所から表示→%s\n", p);
// 	x = ft_strrchr((const char *)test, '3');
// 	printf("検索文字が見つかった場所から表示→%s\n", x);
// 	return (0);
// }

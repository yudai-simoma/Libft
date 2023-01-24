/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:37:32 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/24 19:57:29 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 			i++;
// 	}
// 	return (i);
// }

// #include <stdio.h>
// char	ft_test(unsigned int r, char c)
// {
// 	r = 0;
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c = c - ('a' - 'A');
// 	}
// 	return (c);
// }

/*
** f関数に文字列sの文字を渡し、文字列を作成する
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*src;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	src = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (src == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		src[i] = f(i, s[i]);
		i++;
	}
	src[i] = '\0';
	return (src);
}

// int	main(void)
// {
// 	char		*s;
// 	char		*s1;

// 	s = "abcdefg";
// 	s1 = ft_strmapi(s, &ft_test);
// 	printf("%s\n", s1);
// 	return (0);
// }

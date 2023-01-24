/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:37:01 by shimomayuda       #+#    #+#             */
/*   Updated: 2023/01/24 19:57:36 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if ((s == NULL) || (f == NULL))
		return ((void)0);
	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}

// void ft_test(unsigned int x, char* src)
// {
// 	if (x == 0)
// 		src[0] = '3';
// }

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "abcde";

// 	ft_striteri(src, &ft_test);
// 	printf("%s", src);

//     // char str[] = "abcde";

//     // f = toupper; ft_striteri(str, F);
//     // /* 1 */ ASSERT_EQ_STR(str, "ABCDE");
//     // f = plus_one; ft_striteri(str, F);
//     // /* 2 */ ASSERT_EQ_STR(str, "BCDEF");
//     // f = tolower; ft_striteri(str, F);
//     // /* 3 */ ASSERT_EQ_STR(str, "bcdef");
//     // f = plus_one; ft_striteri(str, F);
//     // /* 4 */ ASSERT_EQ_STR(str, "cdefg");
//     // f = toupper; ft_striteri(str, F);
//     // /* 5 */ ASSERT_EQ_STR(str, "CDEFG");

//     // bzero(buf, 100);
//     // ft_striteri("hello", tobuf);
//     // /* 6 */ ASSERT_EQ_STR(buf, "hello");
//     // ft_striteri(" world", tobuf);
//     // /* 7 */ ASSERT_EQ_STR(buf, "hello world");
//     // ft_striteri(" 42!", tobuf);
//     // /* 8 */ ASSERT_EQ_STR(buf, "hello world 42!");


// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:52:17 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/16 12:10:14 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

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
** s1 の文字と s2 の文字が一致した場合、次の文字同士を比較する
** s2の文字数と、一致した数が同じ場合、tureを返す
*/
static int	ft_match_src(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	match_count;

	i = 0;
	match_count = 0;
	while (*haystack != '\0' && needle[i] != '\0' && i < len)
	{
		if (*haystack != needle[i])
			return (0);
		haystack++;
		i++;
	}
	if (i == ft_strlen(needle))
		return (1);
	return (0);
}

/*
** 文字列 s1 の先頭からsize_t文字目まで、文字列 s2 を探し、見つかったときにはその位置をポインタで返却し、
** 見つからなかったときにはNULLを返却します。
** s１とs２で同じ文字なら、別関数に渡し２文字目からn回を見る
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) < ft_strlen(needle) || ft_strlen(needle) > len)
		return (0);
	i = 0;
	while (haystack[i] != '\0' && len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			if (ft_match_src(&haystack[i], &needle[j], len))
				return ((char *)&haystack[i]);
			len--;
			i++;
		}
		else
		{
			len--;
			i++;
		}
	}
	return (0);
}

// int	main(void)
// {
// 	// const char *largestring1 = "Foo Bar Baz";
// 	// const char *smallstring1 = "Bar";
// 	// char *ptr1;
// 	// ptr1 = strstr(largestring1, smallstring1);

// 	// const char *largestring = "Foo Bar Baz";
// 	// const char *smallstring = "Bar";
// 	// char *ptr;
// 	// ptr = strnstr(largestring, smallstring, 7);

// 	// const char *largestring2 = "Foo Bar Baz";
// 	// const char *smallstring2 = "Bar";
// 	// char *ptr2;
// 	// ptr2 = ft_strnstr(largestring2, smallstring2, 7);

// 	// printf("%s\n", ptr1);
// 	// printf("%s\n", ptr);
// 	// printf("%s\n", ptr2);

// 	char *str = "libft-test-tokyo";
// 	int	len = strlen(str);
// 	for (int i = 5; i < len; i++)
// 	{
// 		// printf("iがiがの時の1：%s\n",i,strnstr(str, "", i));
// 		// printf("iが%dの時1：%s\n\n",i,ft_strnstr(str, "", i));
// 		// 2ASSERT_EQ_PTR(ft_strnstr(str, "libft-test-tokyo", i), strnstr(str, "libft-test-tokyo", i));
// 		// printf("iが%dの時3：%s\n",i,strnstr(str, "libft", i));
// 		// printf("iが%dの時3：%s\n\n",i,ft_strnstr(str, "libft", i));
// 		printf("iが%dの時4：%s\n",i,strnstr(str, "test", i));
// 		printf("iが%dの時4：%s\n\n",i,ft_strnstr(str, "test", i));
// 		// printf("iが%dの時5：%s\n",i,strnstr(str, "tokyo", i));
// 		// printf("iが%dの時5：%s\n\n",i,ft_strnstr(str, "tokyo", i));
// 		printf("iが%dの時6：%s\n",i,strnstr(str, "libft~", i));
// 		printf("iが%dの時6：%s\n\n",i,ft_strnstr(str, "libft~", i));
// 		// 7ASSERT_EQ_PTR(ft_strnstr(str, "z", i), strnstr(str, "z", i));
// 	}

// 	return (0);
// }

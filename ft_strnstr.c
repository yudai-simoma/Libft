/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:52:17 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 15:45:10 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	if (ft_strlen(haystack) < ft_strlen(needle))
		return (0);
	else if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
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
			len--;
			i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char *largestring1 = "Foo Bar Baz";
// 	const char *smallstring1 = "Bar";
// 	char *ptr1;
// 	ptr1 = strstr(largestring1, smallstring1);

// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Bar";
// 	char *ptr;
// 	ptr = strnstr(largestring, smallstring, 7);

// 	const char *largestring2 = "Foo Bar Baz";
// 	const char *smallstring2 = "Bar";
// 	char *ptr2;
// 	ptr2 = ft_strnstr(largestring2, smallstring2, 7);

// 	printf("%s\n", ptr1);
// 	printf("%s\n", ptr);
// 	printf("%s\n", ptr2);
// 	return (0);
// }

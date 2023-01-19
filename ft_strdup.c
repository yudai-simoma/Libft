/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:15:55 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 13:55:39 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 文字列srcを複製し、新しい文字列へのポインターを返す
*/
char	*ft_strdup(const char *src)
{
	char	*src_mal;
	int		i;

	src_mal = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (src_mal == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		src_mal[i] = src[i];
		i++;
	}
	src_mal[i] = '\0';
	return (src_mal);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
//    char *string = "this is a copy";
//    char *newstr1;
//    char *newstr2;

//    if ((newstr1 = strdup(string)) != NULL)
//       printf("%s\n", newstr1);
// 	printf("\n");
//    if ((newstr2 = ft_strdup(string)) != NULL)
//       printf("%s\n", newstr2);
// 	free(newstr2);
//    return (0);
// }

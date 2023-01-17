/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:21:32 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/17 13:33:07 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// /*
// ** メモリに指定バイト数分の値をセットすることができます。
// */
// void	*ft_memset(void *b, int c, size_t len)
// {
// 	unsigned char	*bb;
// 	unsigned char	cc;
// 	size_t			i;

// 	bb = (unsigned char *)b;
// 	cc = (unsigned char)c;
// 	i = 0;
// 	while (i < len)
// 	{
// 		*bb = cc;
// 		bb++;
// 		i++;
// 	}
// 	return (b);
// }

/*
** 指定バイト分メモリ領域をn個分確保する
*/
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*src;

	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	src = (unsigned char *)malloc(size * count);
	if (src == NULL)
		return (NULL);
	ft_memset(src, '\0', (size * count));
	return ((void *)src);
}


// int	main(void)
// {
//    int *ptr,*p;
//    int i;
//    int *ptr1,*p1;
//    int i1;

//    /* 500個のintサイズのメモリを確保 */
// //    ptr = (int *)calloc(500,sizeof(int));
//    ptr = (int *)calloc(42,1);
//    if(ptr == NULL) {
//       printf("メモリが確保できません\n");
//       exit(EXIT_FAILURE);
//    }

//    p = ptr;
//    for (i=0; i<500; i++) {
//       *p = i;
//       printf("%d ",*p);
//       p++;
//    }

//    printf("\n------------------------------------------------------\n");

//    /* 500個のintサイズのメモリを確保 */
// //    ptr1 = (int *)ft_calloc(500,sizeof(int));
//    ptr1 = (int *)ft_calloc(42,1);
//    if(ptr1 == NULL) {
//       printf("メモリが確保できません\n");
//       exit(EXIT_FAILURE);
//    }

//    p1 = ptr1;
//    for (i=0; i<500; i++) {
//       *p1 = i;
//       printf("%d ",*p1);
//       p1++;
//    }

//    /* メモリの開放 */
//    free(ptr);
//    free(ptr1);

//    return 0;
// }

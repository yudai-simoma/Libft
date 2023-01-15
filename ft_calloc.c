/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:21:32 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 14:13:03 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 指定バイト分メモリ領域をn個分確保する
*/
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*src;

	src = (unsigned char *)malloc(sizeof(size) * count);
	if (src == NULL)
		return (NULL);
	ft_memset(src, '\0', size);
	return ((void *)src);
}

// #include <stdio.h>
// int	main(void)
// {
//    int *ptr,*p;
//    int i;
//    int *ptr1,*p1;
//    int i1;

//    /* 500個のintサイズのメモリを確保 */
//    ptr = (int *)calloc(500,sizeof(int));
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
//    ptr1 = (int *)ft_calloc(500,sizeof(int));
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

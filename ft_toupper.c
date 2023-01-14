/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:15:06 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/14 16:32:14 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

/*
** 小文字の英字を大文字に変換する関数です。
** 引数に小文字以外の値を指定した場合は、そのまま値が返ってきます。
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

#include <stdio.h>
int	main(void)
{
	int	c;

    c = toupper('a');
	printf("aを大文字に変換→%c\n",c);
    printf("aを大文字に変換→%c\n",ft_toupper('a'));
}

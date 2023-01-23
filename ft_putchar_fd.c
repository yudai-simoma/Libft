/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:38:59 by shimomayuda       #+#    #+#             */
/*   Updated: 2023/01/23 18:04:50 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 文字を出力する
*/
void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ((void)0);
	write(fd, &c, 1);
}

int	main(void)
{
	ft_putchar_fd('a', 1);
}

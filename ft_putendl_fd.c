/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:34:02 by shimomayuda       #+#    #+#             */
/*   Updated: 2023/01/26 19:57:09 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

/*
** 文字列を出力し、改行する
*/
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL)
		return ((void)0);
	if (fd < 0)
		return ((void)0);
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	ft_putendl_fd("abcde", 1);
// 	return (0);
// }

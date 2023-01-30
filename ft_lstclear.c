/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:23:00 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/30 21:14:36 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cp_lst;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		cp_lst = *lst;
		del((void *)*lst);
		free(*lst);
		*lst = cp_lst->next;
	}
	lst = NULL;
}

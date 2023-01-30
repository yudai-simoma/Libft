/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:15:27 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/30 14:42:59 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * リストに含まれるノードの数を数える
 */
int	ft_lstsize(t_list *lst)
{
	int	return_size;

	return_size = 0;
	while (lst != NULL)
	{
		return_size++;
		lst = lst->next;
	}
	return (return_size);
}

// /*
//  * リストの先頭にノード、newを追加する
//  */
// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	if (lst == NULL || new == NULL)
// 		return ;
// 	new->next = *lst;
// 	*lst = new;
// }

// /*
//  * t_list型の構造体を作成し、作成した構造体を戻りとする
//  */
// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*return_list;

// 	return_list = (t_list *)malloc(sizeof(t_list));
// 	if (return_list == NULL)
// 		return (NULL);
// 	return_list->content = content;
// 	return_list->next = NULL;
// 	return (return_list);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;

// 	lst = NULL;
// 	new = ft_lstnew("abd");
// 	ft_lstadd_front(&lst, new);
// 	new = ft_lstnew("agek");
// 	ft_lstadd_front(&lst, new);
// 	new = ft_lstnew("abd");
// 	ft_lstadd_front(&lst, new);
// 	new = ft_lstnew("abd");
// 	ft_lstadd_front(&lst, new);
// 	printf("%d\n", ft_lstsize(lst));
// 	return (0);
// }

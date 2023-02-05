/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:26:59 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/30 14:15:13 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * リストの先頭にノード、newを追加する
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// /*
//  * t_list型の構造体を作成し、作成した構造体を戻りとする
//  */
// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*return_list;

// 	return_list = (t_list *)malloc(sizeof(t_list));
// 	if (return_list == NULL)
// 		return (NULL);
// 	return_list->next = NULL;
// 	return_list->content = content;
// 	return (return_list);
// }

// #include <stdio.h>
// void	print_list(t_list *front)
// {
// 	while(front != NULL)
// 	{
// 		printf("%s\n",front->content);
// 		front = front->next;
// 	}
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*u;

// 	lst = NULL;
// 	u = ft_lstnew("abc");
// 	ft_lstadd_front(&lst, u);
// 	u = ft_lstnew("def");
// 	ft_lstadd_front(&lst, u);
// 	u = ft_lstnew("123");
// 	ft_lstadd_front(&lst, u);
// 	u = ft_lstnew("xxx");
// 	ft_lstadd_front(&lst, u);
// 	u = ft_lstnew("abc");
// 	ft_lstadd_front(&lst, u);
// 	print_list(lst);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:31:29 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/30 15:45:28 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * リストの最後のノードを返す
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
// 	return_list->next = NULL;
// 	return_list->content = content;
// 	return (return_list);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst;

// 	lst = NULL;
// 	ft_lstadd_front(&lst, ft_lstnew("@@@"));
// 	ft_lstadd_front(&lst, ft_lstnew("abd"));
// 	ft_lstadd_front(&lst, ft_lstnew("DAE"));
// 	ft_lstadd_front(&lst, ft_lstnew("123"));
// 	lst = ft_lstlast(lst);
// 	printf("%s\n", lst->content);
// 	return (0);
// }

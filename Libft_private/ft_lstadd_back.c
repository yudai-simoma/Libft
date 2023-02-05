/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:50:39 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/31 12:00:11 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// /*
//  * リストの最後のノードを返す
//  */
// t_list	*ft_lstlast(t_list *lst)
// {
// 	if (lst == NULL)
// 		return (NULL);
// 	while (lst->next != NULL)
// 		lst = lst->next;
// 	return (lst);
// }

/*
 * リストの末尾にノードnewを追加する
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
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
// 	return_list->content = content;
// 	return_list->next = NULL;
// 	return (return_list);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*lst;

// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew("123"));
// 	ft_lstadd_back(&lst, ft_lstnew("abc"));
// 	ft_lstadd_back(&lst, ft_lstnew("+++"));
// 	ft_lstadd_back(&lst, ft_lstnew("ASDF"));
// 	while (lst != NULL)
// 	{
// 		printf("%s\n", lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }

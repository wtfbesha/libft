/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
#include<stdio.h>
static void	del(void *lst)
{
	free(lst);
}

void f(void *content)
{
    if(content)
        ft_putstr_fd((char *)content, 1);
    ft_putstr_fd("\n", 1);
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = temp_node;
	}
}

/*
int main(void)
{
    t_list *lst;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    lst = NULL;

    node1 = ft_lstnew(ft_strdup("Hello"));
    node2 = ft_lstnew(ft_strdup("42"));
    node3 = ft_lstnew(ft_strdup("Libft"));

    if (!node1 || !node2 || !node3)
        return (1);

    ft_lstadd_back(&lst, node1);
    ft_lstadd_back(&lst, node2);
    ft_lstadd_back(&lst, node3);

    printf("Before clear:\n");
    ft_lstiter(lst, f); // Replace with your print function

    ft_lstclear(&lst, del);

    printf("\nAfter clear:\n");
    if (lst == NULL)
        printf("List is NULL\n");
    else
        printf("List is not empty\n");

    return (0);
}
*/
